/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:15:24 by avoronko          #+#    #+#             */
/*   Updated: 2023/07/12 16:38:56 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief performs the appropriate action based on the specifier
 * @param specifier 
 * @return %c - a single character; 
 * @return %s - a string;
 * @return %p - void * pointer argument in hexadecimal format;
 * @return %d - a decimal (base 10) number;
 * @return %i - a decimal (base 10) integer;
 * @return %u - an unsigned decimal (base 10) integer;
 * @return %x - a number in hexadecimal (base 16) lowercase format;
 * @return %X - a number in hexadecimal (base 16) uppercase format;
 * @return %% - a persentage sign;
*/
void	ft_specifier(va_list arg, const char specifier, int *len)
{
	if (specifier == 'c')
		ft_putchar(va_arg(arg, int), len);
	else if (specifier == 's')
		ft_putstr(va_arg(arg, char *), len);
	else if (specifier == 'p')
		ft_pointer(va_arg(arg, void *), len);
	else if (specifier == 'd' || specifier == 'i')
		ft_putnbr(va_arg(arg, long int), len);
	else if (specifier == 'u')
		ft_putunsigned(va_arg(arg, unsigned int), len);
	else if (specifier == 'x')
		ft_puthex(va_arg(arg, unsigned int), HEX_LOW, len);
	else if (specifier == 'X')
		ft_puthex(va_arg(arg, unsigned int), HEX_UP, len);
	else if (specifier == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	arg;

	len = 0;
	va_start (arg, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			ft_specifier(arg, *++format, &len);
			format++;
		}
		else
			ft_putchar(*format++, &len);
	}
	va_end(arg);
	return (len);
}
