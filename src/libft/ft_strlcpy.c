/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:01:44 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/22 19:55:20 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	if (size && src && dest)
	{
		if (size > srclen)
			size = srclen + 1;
		i = 0;
		while (i < size - 1)
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = 0;
	}
	return (srclen);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char dest1[20] = "Gaze into";
	char dest2[20] = "Gaze into";
    const char *src = "the abyss";
	size_t size = 20;

    printf("ft_strlcpy: %zu\n %s\n", ft_strlcpy(dest1, src, size), dest1);
    printf("strlcpy: %d\n %s\n", strlcpy(dest2, src, size), dest2);
    
    return (0);
}
*/