/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:30:53 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/17 13:45:18 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_calloc(size_t count, size_t size)
{
  size_t   i;
  unsigned char* tmp;

  i = 0;
  tmp = malloc(count * size);
  if (!tmp)
    return (NULL);
  while (i < count * size)
  {
    tmp[i] = 0;
    i++;
  }
  return (tmp);
}
