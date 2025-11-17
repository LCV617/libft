/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:45:27 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/17 16:07:01 by ewaltz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = malloc((sizeof(char) * ft_strlen(s)) + 1);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	return (dest);
}
