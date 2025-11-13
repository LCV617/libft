/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:30:07 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/11 13:26:32 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char* str)
{
  int   nbr;
  int   neg;

  nbr = 0;
  neg = 1;
  while (*str == ' ')
    str++;
  if (*str == '-')
    {
        neg = -1;
        ++str;
    }
  else if (*str == '+')
        ++str;
  if (*str == '-' || *str == '+')
        return 0;
  while(*str >= '0' && *str <= '9')
  {
    nbr = (*str - 48) + (nbr * 10);
    str++;
  }
  nbr = nbr * neg;
  return(nbr);
}

//#include <stdio.h>
//#include <limits.h> // Pour INT_MAX et INT_MIN
//int main()
//{
//    printf("--- Tests de base ---\n");
//    printf("ft_atoi(\"123\")       -> %i\n", ft_atoi("123"));
//    printf("ft_atoi(\"0\")         -> %i\n", ft_atoi("0"));
//    printf("ft_atoi(\"+454\")      -> %i\n", ft_atoi("+454"));
//    printf("ft_atoi(\"-42\")       -> %i\n", ft_atoi("-42"));
//
//    printf("\n--- Gestion des espaces ---\n");
//    printf("ft_atoi(\"   98\")     -> %i\n", ft_atoi("   98")); // Espaces avant le nombre
//    printf("ft_atoi(\"98   \")     -> %i\n", ft_atoi("98   ")); // Espaces après le nombre
//    printf("ft_atoi(\"  1 2  \")   -> %i\n", ft_atoi("  1 2  ")); // Espaces au milieu
//    printf("ft_atoi(\"   \")       -> %i\n", ft_atoi("   ")); // Uniquement des espaces
//
//    printf("\n--- Gestion des signes multiples et invalides ---\n");
//    printf("ft_atoi(\"---454\")    -> %i\n", ft_atoi("---454")); // Signes multiples
//    printf("ft_atoi(\"+-454\")     -> %i\n", ft_atoi("+-454"));  // Signes contradictoires
//    printf("ft_atoi(\"++454\")     -> %i\n", ft_atoi("++454"));  // Signes multiples positifs
//    printf("ft_atoi(\"-\")         -> %i\n", ft_atoi("-"));      // Uniquement un signe négatif
//    printf("ft_atoi(\"+\")         -> %i\n", ft_atoi("+"));      // Uniquement un signe positif
//
//    printf("\n--- Caractères non-numériques ---\n");
//    printf("ft_atoi(\"45-4\")      -> %i\n", ft_atoi("45-4"));    // Caractère non-numérique après chiffres
//    printf("ft_atoi(\"123abc456\") -> %i\n", ft_atoi("123abc456")); // Lettres après chiffres
//    printf("ft_atoi(\"abc123\")    -> %i\n", ft_atoi("abc123"));   // Lettres avant chiffres
//    printf("ft_atoi(\"a1b2c3\")    -> %i\n", ft_atoi("a1b2c3"));   // Lettres intercalées
//    printf("ft_atoi(\"toto\")      -> %i\n", ft_atoi("toto"));     // Uniquement des lettres
//
//    printf("\n--- Limites des entiers (INT_MAX / INT_MIN) ---\n");
//    printf("ft_atoi(\"2147483647\")-> %i (INT_MAX)\n", ft_atoi("2147483647"));
//    printf("ft_atoi(\"-2147483648\")-> %i (INT_MIN)\n", ft_atoi("-2147483648"));
//
//    printf("\n--- Dépassement de capacité (Overflow / Underflow) ---\n");
//    printf("ft_atoi(\"2147483648\")-> %i (Overflow)\n", ft_atoi("2147483648"));
//    printf("ft_atoi(\"9999999999\")-> %i (Overflow)\n", ft_atoi("9999999999"));
//    printf("ft_atoi(\"-2147483649\")-> %i (Underflow)\n", ft_atoi("-2147483649"));
//
//    printf("\n--- Cas limites et erreurs ---\n");
//    printf("ft_atoi(\"\")          -> %i (Chaîne vide)\n", ft_atoi(""));
//    
//    // printf("ft_atoi(NULL)        -> %i (Pointeur NULL)\n", ft_atoi(NULL));
//
//    return 0;
//}
