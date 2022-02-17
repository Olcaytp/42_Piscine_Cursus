/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:49:52 by otapan            #+#    #+#             */
/*   Updated: 2022/02/12 17:30:19 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/* 
int	main(void)
{
	int	fd;

	fd = 1;
	ft_putendl_fd("merhaba", fd);
}*/
/*
 int main()
{
int fd = open("a",1);
printf("değer: %d", fd);
ft_putendl_fd("merhaba",fd);
} */
