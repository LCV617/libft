/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:30:07 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/18 14:27:15 by ewaltz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	neg;

	nbr = 0;
	neg = 1;
	while ((*str == ' ') || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = (*str - 48) + (nbr * 10);
		str++;
	}
	nbr = nbr * neg;
	return (nbr);
}
