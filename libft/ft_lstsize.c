/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:17:54 by otapan            #+#    #+#             */
/*   Updated: 2022/02/14 14:37:36 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* 
// === BEGINNING OF MY TEST ===
#include <stdio.h>
int	main()
{
	t_list	*list;
	int		i = 0;
	list = NULL;
	while (i < 10)
	{
		ft_lstadd_front(&list, ft_lstnew(&i));
		i ++;
	}
	printf("size of list = %d\n", ft_lstsize(list));
}
// === END OF MY TEST === */
