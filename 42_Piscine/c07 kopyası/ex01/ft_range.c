/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:50:26 by otapan            #+#    #+#             */
/*   Updated: 2021/12/16 10:51:15 by otapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*src;
	int	index;

	if (min >= max)
		return (NULL);
	src = malloc(sizeof(int) * (max - min));
	if (src == NULL)
		return (NULL);
	else
	{
		index = 0;
		while (min < max)
		{
			src[index] = min;
			index++;
			min++;
		}
	}
	return (src);
}
