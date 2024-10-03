/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:47:52 by keetter           #+#    #+#             */
/*   Updated: 2024/10/03 11:08:22 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	if (i < n -1)
	{
		while (s1[i] && s2[i] && s1[i] == s2[i])
			i++;
	}
	return (s1[i] - s2[i]);
}

/*int main()
{
	char s1[] = "bbbb";
	char s2[] = "bonj";
	printf("%d\n", ft_strncmp(s1, s2, 10));
	printf("%d\n", strncmp(s1, s2, 10));
	return (0);
}*/
