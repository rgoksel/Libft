/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:39:49 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/14 09:47:39 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int an)
{
	if ((an >= '0' && an <= '9') || (an >= 'a' && an <= 'z') \
	|| (an >= 'A' && an <= 'Z'))
		return (1);
	return (0);
}