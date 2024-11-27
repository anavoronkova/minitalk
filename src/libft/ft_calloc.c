/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:03:31 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/10 16:32:23 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*dest;
	size_t	total_size;

	total_size = nelem * size;
	dest = malloc(total_size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, total_size);
	return (dest);
}
