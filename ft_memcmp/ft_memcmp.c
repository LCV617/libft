/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:16:18 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/13 11:45:54 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stddef.h>
#include <string.h>



int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
  const unsigned char *p1;
  const unsigned char *p2;

  p1 = (const unsigned char *)s1;
  p2 = (const unsigned char *)s2;
  size_t  i;

  i = 0;
  while(i < n)
  {
    if(p1[i] != p2[i])
      return(p1[i] - p2[i]);
    i++;
  }
  return(0);

}

