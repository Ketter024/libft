/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:30:33 by keetter           #+#    #+#             */
/*   Updated: 2024/10/03 16:20:14 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	signe;

	i = 0;
	nb = 0;
	signe = 1;
	if (str[i] == ' ' || (str[i] >= 9 && 13 >= str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * - 1;
		i++;
	}
	while (str[i] >= '0' && '9' >= str[i])
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * signe);
}
/*
int main()
{
	char str[] = "--+-12345";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}*/
