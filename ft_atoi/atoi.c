/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:41:27 by ewaltz            #+#    #+#             */
/*   Updated: 2025/11/11 11:33:28 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#include <stdio.h>
#include <stdlib.h> // Nécessaire pour la fonction atoi
#include <limits.h> // Pour INT_MAX et INT_MIN

int main()
{
    printf("--- Tests de base ---\n");
    printf("atoi(\"123\")       -> %i\n", atoi("123"));
    printf("atoi(\"0\")         -> %i\n", atoi("0"));
    printf("atoi(\"+454\")      -> %i\n", atoi("+454"));
    printf("atoi(\"-42\")       -> %i\n", atoi("-42"));

    printf("\n--- Gestion des espaces ---\n");
    printf("atoi(\"   98\")     -> %i\n", atoi("   98")); // Espaces avant le nombre
    printf("atoi(\"98   \")     -> %i\n", atoi("98   ")); // Espaces après le nombre
    printf("atoi(\"  1 2  \")   -> %i\n", atoi("  1 2  ")); // Espaces au milieu
    printf("atoi(\"   \")       -> %i\n", atoi("   ")); // Uniquement des espaces

    printf("\n--- Gestion des signes multiples et invalides ---\n");
    printf("atoi(\"---454\")    -> %i\n", atoi("---454")); // Signes multiples
    printf("atoi(\"+-454\")     -> %i\n", atoi("+-454"));  // Signes contradictoires
    printf("atoi(\"++454\")     -> %i\n", atoi("++454"));  // Signes multiples positifs
    printf("atoi(\"-\")         -> %i\n", atoi("-"));      // Uniquement un signe négatif
    printf("atoi(\"+\")         -> %i\n", atoi("+"));      // Uniquement un signe positif

    printf("\n--- Caractères non-numériques ---\n");
    printf("atoi(\"45-4\")      -> %i\n", atoi("45-4"));    // Caractère non-numérique après chiffres
    printf("atoi(\"123abc456\") -> %i\n", atoi("123abc456")); // Lettres après chiffres
    printf("atoi(\"abc123\")    -> %i\n", atoi("abc123"));   // Lettres avant chiffres
    printf("atoi(\"a1b2c3\")    -> %i\n", atoi("a1b2c3"));   // Lettres intercalées
    printf("atoi(\"toto\")      -> %i\n", atoi("toto"));     // Uniquement des lettres

    printf("\n--- Limites des entiers (INT_MAX / INT_MIN) ---\n");
    printf("atoi(\"2147483647\")-> %i (INT_MAX)\n", atoi("2147483647"));
    printf("atoi(\"-2147483648\")-> %i (INT_MIN)\n", atoi("-2147483648"));

    printf("\n--- Dépassement de capacité (Overflow / Underflow) ---\n");
    printf("atoi(\"2147483648\")-> %i (Overflow, comportement non défini)\n", atoi("2147483648"));
    printf("atoi(\"9999999999\")-> %i (Overflow, comportement non défini)\n", atoi("9999999999"));
    printf("atoi(\"-2147483649\")-> %i (Underflow, comportement non défini)\n", atoi("-2147483649"));

    printf("\n--- Cas limites et erreurs ---\n");
    printf("atoi(\"\")          -> %i (Chaîne vide)\n", atoi(""));
    // ATTENTION : La ligne suivante provoquera une erreur de segmentation (Segmentation Fault)
    // car atoi tente de lire à l'adresse NULL. Ne l'exécutez pas.
    // printf("atoi(NULL)        -> %i (Pointeur NULL)\n", atoi(NULL));

    return 0;
}
