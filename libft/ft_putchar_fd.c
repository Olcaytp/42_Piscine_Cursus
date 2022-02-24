/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:15:34 by otapan            #+#    #+#             */
/*   Updated: 2022/02/23 17:40:54 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* 
int main()
{
    int i = 1;
    ft_putchar_fd('K', i);
} */
/* int main()
{
    int i = open("olcay.txt", O_WRONLY);
    ft_putchar_fd('K', i);
} */