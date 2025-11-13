/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:57:38 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/13 13:58:32 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

size_t ft_intlen(int a)
{
  size_t result;

  result = 0;
  if(a < 0)
  {
    result++;
    a = a * -1;
  }
  if (a == 0)
    result++;
  while(a != 0)
  {
    a = a / 10;
    result++;
  }
  return(result);
}

char *ft_itoa(int n)
{

  char* result;
  int len;
  int i;
  long nbr;

  nbr = n;
  result = malloc(sizeof(char) * ft_intlen(n));
  if(!result)
    return(NULL);
  while(n != 0)
  {
    result[i] = ((nbr % 10) + 48);
    nbr = nbr / 10;
    i--;
  }
  return(result);
}


int main()
{
  printf("%s", ft_itoa(55));
}
