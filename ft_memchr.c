/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:26:23 by keetter           #+#    #+#             */
/*   Updated: 2024/10/21 16:34:13 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char current_char;

	i = 0;
	while (i < n)
	{
		current_char = *(unsigned char *)(s + i);
		if (current_char == (unsigned char)c)
		return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    char str[] = "Hello, World!";
    char ch = 'H';

	size_t len = sizeof(str);

	char *result = ft_memchr(str, ch, len);
    if (result != NULL)
    {
        printf("Caractère '%c' trouvé à la position : %ld\n", ch, result - str);
    }
    else
    {
        printf("Caractère '%c' non trouvé dans la chaîne.\n", ch);
    }

    return 0;
}
*/
