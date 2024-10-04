/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:33:53 by keetter           #+#    #+#             */
/*   Updated: 2024/10/04 11:15:07 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && 122 >= c)
		return (c - 32);
}

/*int main()
{
	char str[] = "LL030";
    int i = 0;
    while (str[i])
    {
        printf("%c", ft_toupper(str[i]));
        i++;
    }
	printf("\n");

    i = 0;
	 while (str[i])
    {
		printf("%c", toupper(str[i]));
        i++;
    }
	return (0);
}*/
