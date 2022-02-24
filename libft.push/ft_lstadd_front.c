/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:25:03 by otapan            #+#    #+#             */
/*   Updated: 2022/02/14 14:37:06 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *temp)
{
	if (!temp)
		return ;
	temp->next = *lst;
	*lst = temp;
}

/* 
// === BEGINNING OF MY TEST ===
#include <stdio.h>
int	main()
{
	t_list	*node;
	int		i = 0;
	node = NULL;
	while (i < 10)
	{
		ft_lstadd_front(&node, ft_lstnew(&i));
		printf("==========================================================\n");
		printf("Iteration #%d\n", i);
		printf("The node is a pointer, containing the address : %p\n", node);
		printf("The structure content is %d\n", *(int *)node->content);
		if (i == 0)
			printf("The next address pointed by the struct : %p\n", node->next);
		else
			printf("The next address pointed by the struct : %p\n", node->next);
		printf("=======================================================\n\n\n");
		i ++;
	}
	free(node);
} */
