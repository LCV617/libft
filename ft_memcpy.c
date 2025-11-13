/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:47:13 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/12 15:04:20 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n);

int main(void)
{
    char src[] = "Hello42";
    char dst[10];

    ft_memcpy(dst, src, 6);
    dst[6] = '\0';
    printf("dst = %s\n", dst);
    return 0;
}

void *ft_memcpy(void *dst, const void *src, size_t n)
{
  unsigned char* d = (unsigned char*)dst;
  const unsigned char *s = (const unsigned char*)src;
  size_t i = 0;
  while(i < n)
  {
    d[i] = s[i];
    i++;
  }
  return(dst);
}

