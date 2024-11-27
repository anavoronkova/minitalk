/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:02:49 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/20 22:57:39 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n <= 0)
		return (0);
	i = 0;
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n - 1)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
	const char *s1 = "Abyss";
	const char *s2 = "Abyss";
	size_t n = 5;

	printf("ft_memcmp: %d\n",ft_memcmp(s1, s2, n));
	printf("memcmp: %d\n", memcmp(s1, s2, n));

	return (0);
}*/