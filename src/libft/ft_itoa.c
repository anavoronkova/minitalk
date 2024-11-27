/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:02:59 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/20 21:41:31 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*a;
	size_t	len;
	long	nb;

	nb = n;
	len = numlen(n);
	a = malloc(sizeof(char) * (len + 1));
	if (a == 0)
		return (NULL);
	if (nb < 0)
	{
		a[0] = '-';
		nb = -nb;
	}
	a[len--] = '\0';
	if (nb == 0)
		a[0] = '0';
	while (nb)
	{
		a[len--] = nb % 10 + '0';
		nb /= 10;
	}
	return (a);
}

/*#include <stdio.h>
int main()
{
	int a = -123748;
	printf("integer: %d\n", a);
	printf("string: %s\n", ft_itoa(a));
	return (0);
}*/