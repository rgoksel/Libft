/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:36:48 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/14 09:49:34 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while ((haystack[i + j] != '\0') && (needle[j] != '\0') \
		&& ((i + j) < len) && (haystack[i + j] == needle[j]))
		{
			if (needle[j + 1] == '\0')
				return ((char *)&(haystack[i]));
			j++;
		}
		i++;
	}
	return (0);
}
