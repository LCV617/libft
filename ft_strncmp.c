/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:38:04 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/13 11:38:07 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char* str1, char* str2, int n)
{
  int i = 0;
  while((str1[i] || str2[i]) && (i < n))
  {
    if(str1[i] != str2[i])
      return(str1[i] - str2[i]);
    i++;
  }
  return(0);
}

#include <stdio.h>
int main(void)
{
  char* str1 = "salut";
  char* str2 = "salutt";
  int n = 5;
  printf("%i", ft_strncmp(str1, str2, n));
}
