/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:02:55 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/22 20:39:43 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;

	mem = (unsigned char *)s;
	while (n--)
	{
		if (*mem == (unsigned char)c)
			return (mem);
		mem++;
	}
	return (NULL);
}

/*#include <stdio.h>
int main()
{
	const char *s = "Abyss";
	int c = 'y';
	size_t n = 5;
	void *result = ft_memchr(s, c, n);
	
	if (result)
		printf("character '%c' found at position: %ld\n", c, (char *)result - s);
	else
		printf("character '%c' not found.\n", c);

	return (0);
}*/