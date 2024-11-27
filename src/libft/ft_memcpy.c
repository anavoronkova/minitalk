/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:02:44 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/20 23:06:23 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!(dest || src))
		return (NULL);
	d = dest;
	s = src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char dest1[10];
	char dest2[10];
	const char *src = "Abyss";
	size_t n = strlen(src) + 1;

	printf("dest after ft_memcpy: %s\n", (char *)ft_memcpy(dest1, src, n));
	printf("dest after memcpy: %s\n", (char *)memcpy(dest2, src, n));
	return 0;
}*/