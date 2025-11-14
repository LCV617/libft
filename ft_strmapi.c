/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:45:27 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/14 17:21:51 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strlen(char *s);

char fu(unsigned int i, char c)
{
  return(c + i);
}

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
  unsigned int i;
  char *dest;

  i = 0;
  dest = malloc((sizeof(char) * ft_strlen(s)) + 1);
  if(!dest)
    return(NULL);
  while(s[i])
  {
    dest[i] = (*f)(i, s[i]);
    i++;
  }
  return(dest);
}



int main()
{
  const char* str = "aaaaaa";

  printf("%s", ft_strmapi(str, &fu));
}
