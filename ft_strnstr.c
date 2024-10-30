/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:58:02 by keetter           #+#    #+#             */
/*   Updated: 2024/10/27 20:03:49 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_n;
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (NULL);
	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	len_n = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && i + j < len)
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		if (j == len_n)
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
    const char *haystack = "Hello, this is a simple test string.";
    const char *needle = "simple";
    size_t len = 25;
    char *result;

    result = ft_strnstr(haystack, needle, len);

    if (result != NULL)
        printf("Substring found: %s\n", result);
    else
        printf("Substring not found within the given length.\n");

    return 0;
}*/
