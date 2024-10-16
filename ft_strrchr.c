/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:11:37 by keetter           #+#    #+#             */
/*   Updated: 2024/10/15 15:57:30 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>


char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "Hello, world!";
	int			ch = 'o';
	printf("%s\n", ft_strrchr(str, ch));
	printf("%s\n", strrchr(str, ch));
	return (0);
}
*/
