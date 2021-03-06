/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:04:24 by otapan            #+#    #+#             */
/*   Updated: 2022/02/10 14:20:24 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int str)
{
	if ((str < '0') || (str > '9' && str < 'A')
		|| (str > 'Z' && str < 'a') || (str > 'z'))
		return (0);
	return (1);
}
