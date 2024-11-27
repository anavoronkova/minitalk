/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:01:22 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/10 16:33:54 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (substr[0] == '\0')
		return ((char *) str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && str[i + j] == substr[j] && i + j < len)
		{
			if (!substr[j + 1])
			{
				return ((char *) str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
