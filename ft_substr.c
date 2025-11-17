/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:00:20 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/17 16:21:02 by ewaltz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dest;
	int		i;

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
