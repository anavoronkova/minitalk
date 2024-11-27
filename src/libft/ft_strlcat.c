/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:01:49 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/21 00:16:05 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;

	srclen = ft_strlen(src);
	destlen = 0;
	while (dest[destlen] && destlen < size)
		++destlen;
	i = 0;
	if (srclen && size)
	{
		while (*src && i + destlen < size - 1)
		{
			dest[destlen + i] = *src++;
			++i;
		}
	}
	if (destlen + i < size)
		dest[destlen + i] = 0;
	return (destlen + srclen);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
    char dest1[20] = "Gaze into";
	char dest2[20] = "Gaze into";
    const char *src = "the abyss";
	size_t size = 20;

    printf("ft_strlcat: %zu\n %s\n", ft_strlcat(dest1, src, size), dest1);
    printf("strlcat: %d\n %s\n", strlcat(dest2, src, size), dest2);
    
    return (0);
}*/