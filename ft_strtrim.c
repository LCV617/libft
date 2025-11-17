/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 10:31:40 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/17 13:30:17 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int trim(const char *set, char c)
{
  int   i;

  i = 0;
  while(set[i])
  {
    if (c == set [i])
      return (1);
    i++;
  }
  return(0)
}

char * new_str(char *s1, size_t start, size_t len)
{
  char * str;
  size_t i;

  i = 0;
  if (len <= 0 || start >= ft_strlen(s1))
    return(ft_strdup(""));
  str = ft_calloc(len + 1, sizeof(char));
  if (!str)
    return (NULL);
  while (i < len)
  {
    str[i] = s1[start + i];
    i++;
  }
  return(str);
}

char * ft_strtrim(const char* s1,)
{
  int   i;
  int   j;

  i = 0;
  j = ft_strlen(s1) - 1;
  if (ft_strlen(s1) == 0)
    return (ft_strdup(""));
  while (trim(set, s1[i]))
    i++;
  while (trim(set, s1[j]))
    j--;
  return (new_str(s1, i, j - (i - 1)));
}

// int main()
// {
//   const char* s1 = "abbaba salut toiaabba";
//   const char* set = "ab";
//   // printf("%s", ft_strtrim(s1, set));
//   ft_strtrim(s1, set);
// }



