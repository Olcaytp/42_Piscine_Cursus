/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:34:59 by otapan            #+#    #+#             */
/*   Updated: 2022/07/01 08:57:36 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

long	ps_atoll(char *str)
{
	int		i;
	int		pn;
	long	res;

	pn = 1;
	res = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 12) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pn *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * pn);
}

int	ft_atoi(const char *ch)
{
	int				i;
	int				sign;
	unsigned long	res;

	res = 0;
	sign = 1;
	i = 0;
	while ((ch[i] >= '\t' && ch[i] <= '\r') || ch[i] == ' ')
		i++;
	if (ch[i] == '-')
		sign = -1;
	if (ch[i] == '-' || ch[i] == '+')
		i++;
	while (ch[i] > 47 && ch[i] < 58)
	{
		res = (ch[i] - 48) + (res * 10);
		i++;
	}
	if (res > LONG_MAX && sign == -1)
		return (0);
	if (res > LONG_MAX && sign == 1)
		return (-1);
	return (res * sign);
}
