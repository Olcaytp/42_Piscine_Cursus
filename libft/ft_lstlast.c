/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:22:27 by otapan            #+#    #+#             */
/*   Updated: 2022/02/14 14:40:23 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (!ptr)
		return (NULL);
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}

// lst nin son degeri doner.
/* 
// === BEGINNING OF MY TEST ===
#include <stdio.h>
int	main()
{
	t_list	*list;
	t_list	*tail;
	list = NULL;
	ft_lstadd_front(&list, ft_lstnew((int *)3));
	ft_lstadd_front(&list, ft_lstnew((int *)2));
	ft_lstadd_front(&list, ft_lstnew((int *)0));
	printf("content of first node =	%d\n", (int)list->content);
	tail = ft_lstlast(list);
	printf("content of last node =	%d\n", (int)tail->content);
}
// === END OF MY TEST === */
