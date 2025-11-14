/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:19:49 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/14 17:29:54 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

size_t ft_strlen(char *s);

char fu(unsigned int i, char c)
{
  return(c + i);
}

void *ft_striteri(char *s, char (*f)(unsigned int, char*))
{
  unsigned int i;

  i = 0;
  while(s[i])
  {
    (*f)(i, &s[i]);
    i++;
  }
}


int main()
{
  char* str = "aaaaaa";
  ft_striteri(str, &fu);

}
