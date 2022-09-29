/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:06:31 by otapan            #+#    #+#             */
/*   Updated: 2022/07/01 08:56:54 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_sort_five(t_struct **stackA, t_struct **stackB)
{
	int	flag;

	flag = 0;
	ft_push_small_a(stackA, stackB, flag);
	flag = 1;
	ft_push_small_a(stackA, stackB, flag);
	ft_sort_three(stackA);
	ft_push_a(stackA, stackB);
	ft_push_a(stackA, stackB);
}
