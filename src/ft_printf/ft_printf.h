/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:40:56 by avoronko          #+#    #+#             */
/*   Updated: 2023/07/12 16:41:42 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEX_LOW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int				ft_printf(const char *format, ...);
void			ft_specifier(va_list arg, const char specifier, int *len);
void			ft_putchar(char c, int *len);
void			ft_putstr(char *str, int *len);
void			ft_putnbr(int nb, int *len);
void			ft_putunsigned(unsigned int nb, int *len);
void			ft_puthex(unsigned long long nb, char *dic, int *len);
void			ft_pointer(void *ptr, int *len);

#endif