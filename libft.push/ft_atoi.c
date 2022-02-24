/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:55:37 by otapan            #+#    #+#             */
/*   Updated: 2022/02/23 16:36:33 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

int	ft_atoi(const char *str)
{
	unsigned int		i;
	int					m;
	unsigned long		result;

	i = 0;
	m = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	if (result >= LONG_MAX && m == -1)
		return (0);
	if (result > LONG_MAX && m == 1)
		return (-1);
	return (result * m);
}
/*
int main()
{
    char t[] = "        +13asd3";
    printf("$%d$",ft_atoi(t));
}*/
