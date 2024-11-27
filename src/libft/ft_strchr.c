/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:02:08 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/22 20:37:43 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	while (*str && *str != (unsigned char)a)
		str++;
	if (*str == (unsigned char)a)
		return ((char *)str);
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
    const char *str = "Abyss";
    int a = 'y';

    char *result_ft = ft_strchr(str, a);
    char *result_str = strchr(str, a);

    if (result_ft)
        printf("Character '%c' found at position: %ld\n", 
        a, (char *)result_ft - str);
    else
        printf("Character '%c' not found in the string.\n", a);

    if (result_str)
        printf("Character '%c' found at position: %ld\n", 
        a, (char *)result_str - str);
    else
        printf("Character '%c' not found in the string.\n", a);

    return (0);
}*/