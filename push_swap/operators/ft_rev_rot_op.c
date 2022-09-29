/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rot_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:55:46 by otapan            #+#    #+#             */
/*   Updated: 2022/07/01 08:57:09 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_rev_rot_a(t_struct **stackA)
{
	t_struct	*head;
	t_struct	*new;

	if ((*stackA)->next == NULL)
		return ;
	head = *stackA;
	while (head->next != NULL)
		head = head->next;
	new = ft_lstnew(head->value);
	head = *stackA;
	while (head->next != NULL)
	{
		if ((head->next)->next == NULL)
		{
			free (head->next);
			head->next = NULL;
		}
		else
			head = head->next;
	}
	ft_lstadd_back(&new, *stackA);
	*stackA = new;
	write(1, "rra\n", 4);
}

void	ft_rev_rot_b(t_struct **stackB)
{
	t_struct	*head;
	t_struct	*new;

	if ((*stackB)->next == NULL)
		return ;
	head = *stackB;
	while (head->next != NULL)
		head = head->next;
	new = ft_lstnew(head->value);
	head = *stackB;
	while (head->next != NULL)
	{
		if ((head->next)->next == NULL)
		{
			free (head->next);
			head->next = NULL;
		}
		else
			head = head->next;
	}
	ft_lstadd_back(&new, *stackB);
	*stackB = new;
	write(1, "rrb\n", 4);
}

void	ft_rev_rot_ab(t_struct **stackA, t_struct **stackB)
{
	ft_rev_rot_a(stackA);
	ft_rev_rot_b(stackB);
}
