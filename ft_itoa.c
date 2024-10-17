/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:44:16 by keetter           #+#    #+#             */
/*   Updated: 2024/10/17 12:33:19 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

static size_t	count_size(long nb)
{
	size_t	size;

	size = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		size = 1;
	}
	if (nb == 0)
		size = 1;
	else
	{
		while (nb)
		{
			nb = nb / 10;
			size++;
		}
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	long	nb;
	char	*str;
	int		sign;

	nb = (long)n;
	sign = 1;
	if (nb < 0)
		sign = -1;

	size = count_size(nb); //taille nb
	str = (char *) malloc(sizeof(char) * (size + 1));//memoire allouée
	if (str == NULL)
		return (NULL);

	str[size] = '\0';
	if (nb < 0)
		nb = -nb;

	while (size--)
	{
		str[size] = (nb % 10) + '0';//comme atoi, 1 par 1
		nb = nb / 10;
	}

	if (sign == -1)//remettre le -
		str[0] = '-';

	return (str);
}

int main() {
    int n = -907327;
    printf("INT_MIN: %d\n", n);
    printf("-INT_MIN as int: %d\n", -n); // Problème ici, dépassement
    long ln = (long)n;
    printf("-INT_MIN as long: %ld\n", -ln); // Correct
    return 0;
}
