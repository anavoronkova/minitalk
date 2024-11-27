/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:42:01 by avoronko          #+#    #+#             */
/*   Updated: 2023/07/12 16:52:40 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	*len = *len + 1;
}

void	ft_putstr(char *str, int *len)

{
	if (str == NULL)
	{
		ft_putstr("(null)", len);
		return ;
	}
	while (*str)
		ft_putchar(*str++, len);
}

void	ft_putnbr(int nb, int *len)
{
	long	nbr;

	nbr = (long)nb;
	if (nbr < 0)
	{
		ft_putchar('-', len);
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10, len);
	ft_putchar(nbr % 10 + 48, len);
}

void	ft_putunsigned(unsigned int nb, int *len)
{
	if (nb >= 10)
	{
		ft_putunsigned(nb / 10, len);
		ft_putunsigned(nb % 10, len);
	}
	else
		ft_putchar(nb + 48, len);
}

void	ft_puthex(unsigned long long nb, char *dic, int *len)
{
	if (nb >= 16)
	{
		ft_puthex(nb / 16, dic, len);
		ft_puthex(nb % 16, dic, len);
	}
	else
		ft_putchar(dic[nb], len);
}
