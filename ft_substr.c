/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:58:14 by naal-jen          #+#    #+#             */
/*   Updated: 2022/08/06 21:27:58 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h> // malloc
#include <stdio.h> // printf for testing

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*p;
// 	int		i;

// 	i = 0;
// 	p = (char *)malloc((len + 1) * sizeof(*p));
// 	if (!p)
// 		return (NULL);
// 	while (s[start] != '\0' && len)
// 	{
// 		p[i] = s[start];
// 		start++;
// 		len --;
// 		i++;
// 	}
// 	p[i] = '\0';
// 	return (p);
// }

static size_t	strnlen(const char *str, size_t n)
{
	const char	*ptr;

	ptr = str;
	while (*ptr && n)
	{
		ptr++;
		n--;
	}
	return (ptr - str);
}

// same as strndub but with offset "start"
char	*ft_substr(char const *str, unsigned int start, size_t n)
{
	size_t	length;
	char	*new_str;

	length = ft_strlen(str);
	if (length < start)
		start = length;
	str += start;
	n = strnlen(str, n);
	new_str = (char *)malloc(n + 1);
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, str, n);
	new_str[n] = '\0';
	return (new_str);
}

/*int	main(void)
{
    // char s1[] = "hello my loco";
    // printf("%s\n", ft_substr(s1, 2, 5));
    
    // char s2[] = "hello my loco";
    // printf("%s\n", ft_substr(s2, 5, 2));
    
    // char s3[] = "hello my loco";
    // printf("%s\n", ft_substr(s3, 4, 15));
    
    // char s4[] = "hello my loco";
	// printf("%s\n", ft_substr(s4, 0, 13));
			printf("%s\n", ft_substr("tripouille", 0, 42000));
}*/