/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:18:34 by keetter           #+#    #+#             */
/*   Updated: 2024/10/03 15:32:16 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t = i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] == ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
