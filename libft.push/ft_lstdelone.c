/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:54:30 by otapan            #+#    #+#             */
/*   Updated: 2022/02/23 12:08:52 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
//bir struct verilir ve eger o bos ise direkt return edilir.
// eger bos degilse verilen del fonksiyonuna lst nin contenti verilir
// silinir, en sonda da free ile lst bellekten silinir.
// === BEGINNING OF MY TEST ===
/* void	del(void *content)
{
	ft_bzero(content, strlen(content));
} */
/* 
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
    ft_lstdelone(list->next->next, del);
	printf("%d\n", ft_lstsize(list));
}
// === END OF MY TEST === */
