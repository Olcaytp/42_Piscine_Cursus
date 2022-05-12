/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:43:03 by otapan            #+#    #+#             */
/*   Updated: 2022/03/08 12:43:04 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_ptr(unsigned long long p)
{
	if (p >= 16)
	{
		ft_put_ptr(p / 16);
		ft_put_ptr(p % 16);
	}
	else
	{
		if (p > 9)
			ft_putchar(p - 10 + 'a');
		else
			ft_putchar(p + 48);
	}
}

int	ft_ptrlen(unsigned long long p)
{
	int	len;

	len = 0;
	while (p != 0)
	{
		p /= 16;
		len++;
	}
	return (len);
}

int	ft_print_ptr(unsigned long long p)
{
	int	len;

	len = 0;
	if (p == 0)
	{
		len += ft_putchar('0');
		len += ft_putchar('x');
		len += ft_putchar('0');
		return (len);
	}
	len += ft_printstr("0x");
	len += ft_ptrlen(p);
	ft_put_ptr(p);
	return (len);
}
