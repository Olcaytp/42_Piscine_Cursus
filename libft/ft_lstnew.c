/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:38:08 by otapan            #+#    #+#             */
/*   Updated: 2022/02/14 14:36:21 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

/* 
// === BEGINNING OF MY TEST ===
#include <stdio.h>
int	main()
{
	t_list	*list;
	char	*s;
	int		i;
	printf("\n=== TEST ft_lstnew WITH STRING ===\n\n");
	s = "test";
	list = ft_lstnew(s);
	printf("CONTENT : %s, NEXT : %p\n", (char *)list->content, list->next);
	free(list);
	printf("\n=== TEST ft_lstnew WITH INT ===\n\n");
	i = 42;
	list = ft_lstnew(&i);
	printf("CONTENT : %d, NEXT : %p\n", *(int *)list->content, list->next);
	free(list);
} */
