/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:18:34 by keetter           #+#    #+#             */
/*   Updated: 2024/10/17 11:12:50 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*void *ft_memcpy(void *dst, const void *src, size_t n);

int main(void)
{
    char src[] = "Hello, World!";
    char dst[20];

    ft_memcpy(dst, src, strlen(src) + 1); //+1 pour le /0

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);

    return 0;
}*/
