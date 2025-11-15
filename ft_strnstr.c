/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 09:15:35 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/15 10:13:29 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char *strnstr(const char *haystack, const char *needle, size_t len)
{
  size_t i;
  size_t j;

  i = 0;
  j = 0;
  if(needle[0] == '\0')
    return((char*) haystack);
  while(haystack[i] && i < len)
  {
    j = 0;
    while(haystack[i + j] == needle[j] && haystack[i + j] && (i + j < len))
    {
      j++;
      if(needle[j] == '\0')
        return((char*) haystack + i);
    }
    i++;
  }
  return(NULL);
}


int main(void)
{
  const char* haystack = "salut toi";
  const char* needle = "toi";
  size_t len = 10;
  printf("%s", strnstr(haystack, needle, len));
}
