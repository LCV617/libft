/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 10:31:40 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/15 13:18:52 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strtrim(const char *s1, const char *set)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while(s1[i])
  {
    while(set[j])
    {
      if(set[j] == s[i])

    }
  }
}

#include <stdio.h>

int main()
{
  const char* s1 = "abbaba salut toiaabba";
  const char* set = "ab";
  printf("%s", ft_strtrim(s1, set));
}
