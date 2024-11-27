/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:01:59 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/20 23:54:27 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse_case(unsigned int index, char *ch)
{
    if (islower(*ch))
        *ch = toupper(*ch);
    else if (isupper(*ch))
        *ch = tolower(*ch);
}

int main()
{
    char s[] = "Abyss";
    
    printf("Original string: %s\n", s);
    
    ft_striteri(s, reverse_case);
    
    printf("Modified string: %s\n", s);
    
    return 0;
}*/