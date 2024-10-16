/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:18:37 by keetter           #+#    #+#             */
/*   Updated: 2024/10/15 12:54:10 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	long	i;
	if (dst < src)
	{
		i = 0;
		while ((size_t)i < len)
		{
			unsigned char temp = *(unsigned char *)(src + i);
			*(unsigned char *)(dst + i) = temp;
			i++;
		}
		return (dst);
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			unsigned char source_value = *(unsigned char *)(src + i);
			*(unsigned char *)(dst + i) = source_value;
			i--;
		}
		return (dst);
	}
}

/*
int main(void)
{
    char src[] = "Hello, World!";
    char dst[20];

    printf("Avant ft_memmove:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);

    ft_memmove(dst, src, strlen(src) + 1);

    printf("\nAprès ft_memmove:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);

    return 0;
}*/
