/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:55:29 by keetter           #+#    #+#             */
/*   Updated: 2024/10/03 17:43:09 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && 90 >= c)
	{
		c += 32;
			return (c);
	}
	return (c);
}

/*int main()
{
	char str[] = "HELLO WORLD";
    int i = 0;
    while (str[i])
    {
        printf("%c", ft_tolower(str[i]));
        i++;
    }
	printf("\n");

    i = 0;
	 while (str[i])
    {
		printf("%c", tolower(str[i]));
        i++;
    }
	return (0);
}*/
