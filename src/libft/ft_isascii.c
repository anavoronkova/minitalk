/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:03:14 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/20 21:19:00 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main()
{
	int a1 = 90;
	int a2 = 136;

	if (ft_isascii(a1))
		printf("%c is an ASCII character.\n", a1);
	else
		printf("%c is not an ASCII character.\n", a1);
	if (ft_isascii(a2))
		printf("%c is an ASCII character.\n", a2);
	else
		printf("%c is not an ASCII character.\n", a2);
	return (0);	
}*/