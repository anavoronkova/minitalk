/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:01:53 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/21 00:02:22 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;

	join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (join == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		join[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		join[i] = *s2++;
		i++;
	}
	join[i] = '\0';
	return (join);
}

/*#include <stdio.h>
int main()
{
    const char *s1 = "Gaze into";
    const char *s2 = "the abyss";
    char *joined_str = ft_strjoin(s1, s2);

    printf("string1: %s\n", s1);
	printf("string2: %s\n", s2);
	if (joined_str)
    {
        printf("joined string: %s\n", joined_str);
        free(joined_str);
    }
    return (0);
}*/