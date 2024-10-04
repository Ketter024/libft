/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:55:28 by keetter           #+#    #+#             */
/*   Updated: 2024/10/04 11:14:23 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	size_t = i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			break;
		i++;
	}
	if (s[i] == (char) c)
		return ((char *) s + i)
	return (NULL);
}

int main()
{
	char s[] = "hello";

}
