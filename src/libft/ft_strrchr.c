/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:01:16 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/10 16:33:57 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int a)
{
	int	i;

	i = (int) ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (unsigned char) a)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (NULL);
}
