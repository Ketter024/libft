/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:09:17 by keetter           #+#    #+#             */
/*   Updated: 2024/10/03 15:24:00 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	i = 0;

	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
