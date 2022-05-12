/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:43:06 by otapan            #+#    #+#             */
/*   Updated: 2022/03/08 12:43:07 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		ft_printstr("(null)");
		return (6);
	}
	while (*str)
	{
		len += ft_putchar(*str);
		str++;
	}
	return (len);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}
