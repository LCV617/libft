/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:34:55 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/15 14:38:31 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
  size_t i;

  i = 0;
  const  unsigned char* str = (const unsigned char*)s;
  unsigned char t = (unsigned char)c;
  while (i < n)
  {
    if(str[i] == t)
      return((void*) &str[i]);
    i++;
  }
  return(NULL);
}

int main()
{
  const char*s = "salut";
  int c = 'u';
  size_t n = 5;
  printf("%s", ft_memchr(s, c, n));
}
