/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:50:58 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/17 15:55:09 by ewaltz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = maloc(sizeof(char) * ft_strlen(str));
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//#include <stdio.h>
//int   main()
//{
//  printf("%s", ft_strdup("salut"));
//}
