/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:01:05 by avoronko          #+#    #+#             */
/*   Updated: 2023/05/22 20:35:09 by avoronko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= len)
		len = s_len - start;
	if (start > s_len)
		return (ft_strdup(""));
	sub = ft_calloc(len + 1, sizeof(char));
	if (sub == NULL)
		return (NULL);
	else
		ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

/*#include <stdio.h>
int main ()
{
	const char *s = "Gaze into the abyss";
    unsigned int start = 7;
    size_t len = 5;

    char *sub = ft_substr(s, start, len);

    printf("Original string: %s\n", s);
    printf("Substring: %s\n", sub);
	
    free(sub);

    return (0);
}*/
/*cc ft_substr.c ft_strlen.c ft_strdup.c 
ft_memset.c ft_calloc.c ft_strlcpy.c ft_memcpy.c 
ft_calloc.c ft_bzero.c */