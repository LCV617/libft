/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:47:13 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/17 15:19:22 by ewaltz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	s = (const unsigned char *) src;
	d = (unsigned char *) dst;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
