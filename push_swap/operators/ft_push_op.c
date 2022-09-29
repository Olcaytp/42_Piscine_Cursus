/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:52:31 by otapan            #+#    #+#             */
/*   Updated: 2022/07/01 08:57:12 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_push_a(t_struct **stackA, t_struct **stackB)
{
	t_struct	*head;

	if (*stackB)
	{
		head = (*stackB)->next;
		(*stackB)->next = *stackA;
		*stackA = *stackB;
		*stackB = head;
		write(1, "pa\n", 3);
	}
}

void	ft_push_b(t_struct **stackA, t_struct **stackB)
{
	t_struct	*head;

	if (*stackA)
	{
		head = (*stackA)->next;
		(*stackA)->next = *stackB;
		*stackB = *stackA;
		*stackA = head;
		write(1, "pb\n", 3);
	}
}
