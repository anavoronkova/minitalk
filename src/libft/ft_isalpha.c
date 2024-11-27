/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:03:19 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/20 21:04:39 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 'A' && a <= 'Z') \
	|| (a >= 'a' && a <= 'z'))
		return (1);
	return (0);
}

/*#include <stdio.h>
int main()
{
	int a1 = 'A';
	int a2 = '5';

	if (ft_isalpha(a1))
		printf("%c is an alphabetical character. \n", a1);
	else
		printf("%c is not an alphabetical character.\n", a1);
	if (ft_isalpha(a2))
		printf("%c is an alphabetical character. \n", a2);
	else
		printf("%c is not an alphabetical character.\n", a2);
	return (0);	
}*/