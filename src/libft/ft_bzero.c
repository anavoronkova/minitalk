/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:03:35 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/18 18:59:12 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*#include <stdio.h>
#include <strings.h>

int	main()
{
	char	s1[10] = "abyss";
	char	s2[10] = "abyss";

	printf("Before: %s\n", s1);

	ft_bzero(s1 + 2, 3);
	bzero(s2 + 2, 3);

	printf("After ft_bzero: %s\n", s1);
	printf("After bzero: %s\n", s2);

	return (0);
}*/