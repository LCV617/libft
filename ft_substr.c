/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:00:20 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/19 10:15:19 by ewaltz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*dest;
	size_t		ln;
	size_t		cpy;

	if (!s)
		return (NULL);
	ln = ft_strlen(s);
	if (start >= ln)
		return (ft_strdup(""));
	cpy = len;
	if (start + len > ln)
		cpy = ln - start;
	dest = malloc(sizeof(char) * (cpy + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s + start, cpy);
	dest[cpy] = '\0';
	return (dest);
}
