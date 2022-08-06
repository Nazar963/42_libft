/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:49:07 by coder             #+#    #+#             */
/*   Updated: 2022/08/05 22:40:32 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	while (*s)
	{
		s++;
	}
	while (*s != (char)c || *s != s[0])
	{
		s--;
	}
	if (*s == s[0])
		return (NULL);
	return ((char *)s);
}
int main(void)  
{
    char sd[] = "fsad3a2";
    printf("mine: %s \n", ft_strrchr(sd, 'd'));
    char s[] = "fsad3a2";
    printf("originale: %s \n", strrchr(s, 'd'));

    char sdq[] = "fsad3a2";
    printf("mine: %s \n", ft_strrchr(sdq, 'f'));
    char sq[] = "fsad3a2";
    printf("originale: %s \n", strrchr(sq, 'f'));

    char sdw[] = "fsad3a2";
    printf("mine: %s \n", ft_strrchr(sdw, '2'));
    char sw[] = "fsad3a2";
    printf("originale: %s \n", strrchr(sw, '2'));

    char sdd[] = "fsad3a2";
    printf("mine: %s \n", ft_strrchr(sdd, 'z'));
    char ss[] = "fsad3a2";
    printf("originale: %s \n", strrchr(ss, 'z'));

    char sda[] = "fsad3a2";
    printf("mine: %s \n", ft_strrchr(sda, '\0'));
    char sa[] = "fsad3a2";
    printf("originale: %s \n", strrchr(sa, '\0'));

    char asda[] = "fsdad3da2";
    printf("mine: %s \n", ft_strrchr(asda, 'd'));
    char asa[] = "fsdad3da2";
    printf("originale: %s \n", strrchr(sa, 'd'));
    
    return (0);    
}
