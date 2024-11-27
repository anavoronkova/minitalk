/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:03:26 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/20 21:21:36 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (ft_isalpha(a) || ft_isdigit(a))
		return (1);
	return (0);
}

/*#include <stdio.h>
int main()
{
	int a1 = 'A';
	int a2 = '5';
	int a3 = '&';

	if (ft_isalpha(a1))
		printf("%c is an alphanumeric character.\n", a1);
	else
		printf("%c is not an alphanumeric character.\n", a1);
	if (ft_isalpha(a2))
		printf("%c is an alphanumeric character.\n", a2);
	else
		printf("%c is not an alphanumeric character.\n", a2);
	if (ft_isalpha(a3))
		printf("%c is an alphanumeric character.\n", a3);
	else
		printf("%c is not an alphanumeric character.\n", a3);
	return (0);	
}*/