/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:50:42 by keetter           #+#    #+#             */
/*   Updated: 2024/10/20 13:05:51 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	char_s1;
	unsigned char	char_s2;

	i = 0;
	while (i < n)
	{
		char_s1 = *(unsigned char *)(s1 + i);
		char_s2 = *(unsigned char *)(s2 + i);
		if (char_s1 != char_s2)
		{
			return (char_s1 - char_s2);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, Worl!";

    size_t len = sizeof(str1) - 1;

    // Appel de la fonction ft_memcmp
    int result = ft_memcmp(str1, str2, len);

    if (result == 0)
    {
        printf("Les chaînes sont identiques.\n");
    }
    else if (result < 0)
    {
        printf("La première chaîne est plus petite que la deuxième.\n");
    }
    else
    {
        printf("La première chaîne est plus grande que la deuxième.\n");
    }
    return 0;
}
*/
