/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:02:04 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/20 23:40:04 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(str) + 1;
	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, str, len);
	return (dup);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	const char *str = "Abyss";
    
    char *duplicate_ft = ft_strdup(str);
    char *duplicate_str = strdup(str);
    
    if (duplicate_ft)
    {
        printf("Duplicate ft_strdup: %s\n", duplicate_ft);
        free(duplicate_ft);
    }
    else
    {
        printf("Failed to duplicate using ft_strdup.\n");
    }
    
    if (duplicate_str)
    {
        printf("Duplicate strdup: %s\n", duplicate_str);
        free(duplicate_str);
    }
    else
    {
        printf("Failed to duplicate using strdup.\n");
    }
	return (0);
}*/