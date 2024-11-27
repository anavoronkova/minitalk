/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:13:03 by avoronko          #+#    #+#             */
/*   Updated: 2023/09/28 20:41:57 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_convert_base(size_t n, char *base)
{
	int		len;
	char	*n_base;
	size_t	base_len;
	size_t	aux;

	base_len = ft_strlen(base);
	len = 0;
	aux = n;
	if (n == 0)
		len = 1;
	while (aux != 0)
	{
		aux /= base_len;
		len++;
	}
	n_base = malloc(sizeof(char) * (len + 1));
	if (!n_base)
		return (NULL);
	n_base[len] = '\0';
	while (len--)
	{
		n_base[len] = base[n % base_len];
		n /= base_len;
	}
	return (n_base);
}
