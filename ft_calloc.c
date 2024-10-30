/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:56:36 by keetter           #+#    #+#             */
/*   Updated: 2024/10/28 16:02:11 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *tmp;
    size_t i;

    i = 0;
    tmp = malloc(count * size);
    if (!tmp)
        return (NULL);
    while (i < count * size)
        tmp[i++] = 0;
    return (tmp);
}
/*
int main(void)
{
    int *array;
    size_t count = 5;
    size_t size = sizeof(int);

    // Appel de ft_calloc pour allouer et initialiser la mémoire
    array = (int *)ft_calloc(count, size);
    if (!array)
    {
        printf("Allocation échouée\n");
        return 1;
    }

    // Affiche les valeurs pour vérifier qu'elles sont toutes à zéro
    for (size_t i = 0; i < count; i++)
    {
        printf("array[%zu] = %d\n", i, array[i]);
    }

    // Libère la mémoire allouée
    free(array);

    return 0;
}*/
