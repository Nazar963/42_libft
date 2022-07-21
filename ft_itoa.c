/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:58:14 by naal-jen          #+#    #+#             */
/*   Updated: 2022/05/09 10:25:50 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

static char	*positive_number(char *ptr, int i)
{
	int		j;
	char	tab[1];

	j = 0;
	while (j < i / 2)
	{
		tab[0] = ptr[i - 1 - j];
		ptr[i - 1 - j] = ptr[j];
		ptr[j] = tab[0];
		j++;
	}
	return (ptr);
}

static char	*reverse_string(char *ptr, int i)
{
	int		j;
	int		k;
	char	tab[1];

	k = 0;
	if (i == 1 && ptr[0] == '0')
	{
		return (ptr);
	}
	if (ptr[0] == '-')
	{
		j = 1;
		while (j <= i / 2)
		{
			tab[0] = ptr[i - 1 - k];
			ptr[i - 1 - k] = ptr[j];
			ptr[j] = tab[0];
			j++;
			k++;
		}
		return (ptr);
	}
	return (positive_number(ptr, i));
}

static int	count_digits(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	int			i;
	int			j;
	long int	nbr;

	i = count_digits(n);
	j = 0;
	nbr = n;
	ptr = (char *)malloc((i + 1) * sizeof(*ptr));
	if (!ptr)
		return (NULL);
	if (nbr == 0 || nbr == -0)
		return ("0");
	if (nbr < 0 && i++)
	{
		ptr[j++] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		ptr[j++] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	ptr[j] = '\0';
	return (reverse_string(ptr, i));
}
/*int main(void)
{
	printf(" 0\n\"%s\"\n\n", ft_itoa(0));
	printf(" -0\n\"%s\"\n\n", ft_itoa(-0));
	printf(" 123\n\"%s\"\n\n", ft_itoa(123));
	printf(" -123\n\"%s\"\n\n", ft_itoa(-123));
	printf(" -321\n\"%s\"\n\n", ft_itoa(-321));
	printf(" -12345\n\"%s\"\n\n", ft_itoa(-12345));
	printf(" 123456789\n\"%s\"\n\n", ft_itoa(123456789));
	printf(" -123456789\n\"%s\"\n\n", ft_itoa(-123456789));
	printf(" 2147483647\n\"%s\"\n\n", ft_itoa(2147483647));
	printf(" -2147483648\n\"%s\"\n\n", ft_itoa(-2147483648));
	return (0);
}*/