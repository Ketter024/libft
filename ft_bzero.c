/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:43:50 by keetter           #+#    #+#             */
/*   Updated: 2024/10/03 14:02:49 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0; //*(unsigned char *)(s + i) = 0;
		i++;
	}
}

int main(void)
{
    char str[50] = "Hello, World!";  //s test

    printf("Avant ft_bzero: %s\n", str);  //avant bzero
    ft_bzero(str, 6);  // Mettre à zéro les 6 premiers octets
    printf("Après ft_bzero: %s\n", str);  //après bzero
    return 0;
}
