/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naal-jen <naal-jen@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:04:19 by naal-jen          #+#    #+#             */
/*   Updated: 2022/08/03 16:45:04 by naal-jen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp1;
	t_list	*temp2;

	temp1 = *lst;
	if (!*lst)
		return ;
	while (temp1->next != NULL)
	{
		ft_lstdelone(temp1, del);
		temp1 = temp1->next;
	}
	*lst = NULL;
}
