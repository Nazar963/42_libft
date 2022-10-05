/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:44:37 by naal-jen          #+#    #+#             */
/*   Updated: 2022/08/04 17:44:44 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	unsigned int	i;
// 	char			*pdest;
// 	const char		*psrc;
// 	char			*tmp;

// 	i = 0;
// 	pdest = (char *)dest;
// 	psrc = (const char *)src;
// 	tmp = (char *)malloc(sizeof(*tmp) * n);
// 	if (!tmp)
// 		return (NULL);
// 	while (i < n)
// 	{
// 		*(tmp + i) = *(psrc + i);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < n)
// 	{
// 		*(pdest + i) = *(tmp + i);
// 		i++;
// 	}
// 	free (tmp);
// 	return (dest);
// }

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			step;
	size_t			index;
	unsigned char	*dest;
	unsigned char	*source;

	if (dst == NULL && src == NULL)
		return (NULL);
	step = +1;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dst > src)
	{
		step = -1;
		dest = (unsigned char *)(dst + len - 1);
		source = (unsigned char *)(src + len - 1);
	}
	index = 0;
	while (index < len)
	{
		*dest = *source;
		dest += step;
		source += step;
		index++;
	}
	return (dst);
}

/*int	main(void)
{
	// my ft_memmove
	char cSrc[] = "loco is loco";
	char cDest[100];

	ft_memmove(cDest, cSrc, 3);
	printf("mine: %s\n", cDest);

	// og memmove
	char sSrc[] = "loco is loco";
	char sDest[100];
	sDest[3] = '\0';
	memmove(sDest, sSrc, 3);
	printf("og: %s\n", sDest);

	// //my ft_memmove
	// int iSrc[] = {67, 68, 67, 68, 69, 0, 45};
	// int n = sizeof(iSrc)/sizeof(iSrc[0]);
	// int iDest[] = {67, 68, 67, 68, 69, 0, 45};
	// int index = 0;

	// ft_memmove(iDest + 1, iSrc, 2);
	// printf("\nmine array: ");

	// for (index=0; index<n; index++)
	// {
	// 	printf("%d ", iDest[index]);
	// }

	// //og memmove
	// int wSrc[] = {67, 68, 67, 68, 69, 0, 45};
	// int wn = sizeof(wSrc)/sizeof(wSrc[0]);
	// int wDest[] = {67, 68, 67, 68, 69, 0, 45}; 
	// int	windex = 0;

	// memmove(wDest + 1, wSrc, 2);
	// printf("\nog array:   ");

	// for (windex=0; windex<wn; windex++)
	// {
	// 	printf("%d ", wDest[windex]);
	// }
	// printf("\n");

	// int me[] = {67, 68, 67, 68, 69, 0, 45}; 
	// printf("            ");
	// for (int m = 1; m < 7; m++)
	// 	printf("%d ", me[m]);
	// printf("\n");
	// printf("%d ", me);
	return (0);
}*/