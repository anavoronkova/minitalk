/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:03:06 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/20 21:26:37 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main()
{
	int a1 = '1';
	int a2 = 13;

	if (ft_isprint(a1))
		printf("%c is printable.\n", a1);
	else
		printf("%c is not printable.\n", a1);
	if (ft_isprint(a2))
		printf("%c is printable.\n", a2);
	else
		printf("%c is not printable.\n", a2);
	return (0);	
}*/