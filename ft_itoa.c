/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:57:38 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/15 14:39:02 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

static size_t ft_intlen(long n)
{
    size_t len = 0;

    if (n <= 0)     {
        len++;
        n = -n;
    }
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n)
{
    long   nbr = n;
    size_t len = ft_intlen(nbr);
    char  *result = malloc(sizeof(char) * (len + 1));

    if (!result)
        return NULL;
    result[len] = '\0';
    if (nbr == 0)
    {
        result[0] = '0';
        return result;
    }
    if (nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while (nbr != 0)
    {
        result[--len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return result;
}


int main(void)
{
    char *s = ft_itoa(55);
    printf("%s\n", s);
    free(s);
}

