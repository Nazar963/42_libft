/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:49:07 by coder             #+#    #+#             */
/*   Updated: 2022/02/09 12:49:07 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isdigit(int c)
{
	unsigned char	v;

	v = (unsigned char)c;
	if (v >= '0' && v <= '9')
		return (1);
	else
		return (0);
}
/*int main(void)
{
    //1
    char a1 = '0';
    printf("1-mine: %d\n", ft_isdigit(a1));
    char aa1 = '0';
    printf("1-original: %d\n\n", isdigit(aa1));
    
    //2
    char a2 = '9';
    printf("2-mine: %d\n", ft_isdigit(a2));
    char aa2 = '9';
    printf("2-original: %d\n\n", isdigit(aa2));
    
    //3
    char a3 = 'A';
    printf("3-mine: %d\n", ft_isdigit(a3));
    char aa3 = 'A';
    printf("3-original: %d\n\n", isdigit(aa3));
    
    //4
    char a4 = 'h';
    printf("4-mine: %d\n", ft_isdigit(a4));
    char aa4 = 'h';
    printf("4-original: %d\n\n", isdigit(aa4));
    
    //5
    char a5 = '5';
    printf("5-mine: %d\n", ft_isdigit(a5));
    char aa5 = '5';
    printf("5-original: %d\n\n", isdigit(aa5));

    return (0);
}*/