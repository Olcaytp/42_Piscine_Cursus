/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:28:19 by otapan            #+#    #+#             */
/*   Updated: 2022/02/14 14:57:44 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *temp)
{
	t_list	*ptr;

	if (*lst == NULL)
		*lst = temp;
	else
	{
		ptr = *lst;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
}
//19da lst bos ise direkt ilk eleman new atanir.
//24de  ptr nin en sonuna dek gider ptr next null oldugunda 
// 26 da new parametresi en sona atanir ve new in nexti null yapilir.
// cunku new->next null olmali en sona new.
/* 
// === BEGINNING OF MY TEST ===
int	main(void)
{
	t_list	*list;
	t_list	*tail;

	list = NULL;
	ft_lstadd_back(&list, ft_lstnew((int *)0));
	ft_lstadd_back(&list, ft_lstnew((int *)1));
	ft_lstadd_back(&list, ft_lstnew((int *)3));
	printf("content of first node =	%d\n", (int)list->content);
	tail = ft_lstlast(list);
	printf("content of last node =	%d\n", (int)tail->content);
}
// === END OF MY TEST === */