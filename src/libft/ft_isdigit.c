/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:03:10 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/20 21:06:41 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

/*#include <stdio.h>
int main()
{
	int a1 = '1';
	int a2 = 'a';

	if (ft_isdigit(a1))
		printf("%c is a digit. \n", a1);
	else
		printf("%c is not a digit.\n", a1);
	if (ft_isdigit(a2))
		printf("%c is a digit. \n", a2);
	else
		printf("%c is not a digit.\n", a2);
	return (0);	
}*/