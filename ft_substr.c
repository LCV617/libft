/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:00:20 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/18 11:40:23 by ewaltz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t		i;

	i = 0;
	dest = malloc(sizeof(char) * (len - start));
	while (i < len)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	return (dest);
}
