/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:02:40 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/20 22:52:08 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!(dest || src))
		return (NULL);
	d = dest;
	s = src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	const char src[] = "Abyss";
	char dest1[6];
	char dest2[6];
	size_t n = 5;

	ft_memmove(dest1, src, n);

	printf("dest after ft_memmove: %s\n", dest1);

	memmove(dest2, src, n);

	printf("dest after memmove: %s\n", dest2);

	return (0);
}*/