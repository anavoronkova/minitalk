/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:10:38 by avoronko          #+#    #+#             */
/*   Updated: 2023/07/14 20:10:53 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer(void *ptr, int *len)
{
	unsigned long long	nb;

	nb = (unsigned long long)ptr;
	if (!ptr)
	{
		write (1, "(nil)", 5);
		*len = *len + 5;
	}
	else
	{
		ft_putstr("0x", len);
		ft_puthex(nb, HEX_LOW, len);
	}
}
