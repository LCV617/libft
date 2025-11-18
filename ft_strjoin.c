/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:09:15 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/17 16:01:23 by ewaltz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	int		i;
	int		y;

	i = 0;
	y = 0;
	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[y])
	{
		dest[i] = s2[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}
