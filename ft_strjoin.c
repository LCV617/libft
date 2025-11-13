/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:09:15 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/12 13:18:09 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int   ft_strlen(const char* str)
{
  int i = 0;
  while(str[i])
    i++;
  return(i);
}

char *ft_strjoin(const char *s1, const char *s2)
{
  char* dest;
  int i;
  int y;

  i = 0;
  y = 0;
  dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
  while(s1[i])
  {
    dest[i] = s1[i];
    i++;
  }
  while(s2[y])
  {
    dest[i] = s2[y];
    i++;
    y++;
  }
  dest[i] = '\0';
    return(dest);
}

#include <stdio.h>

int main()
{
  const char* s1 = "salut";
  const char* s2 = " toi";
  printf("%s", ft_strjoin(s1, s2));
}
