/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:33:53 by keetter           #+#    #+#             */
/*   Updated: 2024/10/03 16:54:22 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && 122 >= c)
	{
		c -= 32;
			return (c);
	}
	return (c);
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
