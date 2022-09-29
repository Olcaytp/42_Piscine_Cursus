/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:06:03 by otapan            #+#    #+#             */
/*   Updated: 2022/07/01 08:56:57 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_push_small_a(t_struct **stackA, t_struct **stackB, int flag)
{
	t_struct	*head;

	head = *stackA;
	while (head->next != NULL)
	{
		if (head->index == 0 && flag == 0)
		{
			ft_push_b(stackA, stackB);
			break ;
		}
		if (head->index == 1 && flag == 1)
		{
			ft_push_b(stackA, stackB);
			break ;
		}
		ft_rot_a(stackA);
		head = *stackA;
	}
	free (head);
}
