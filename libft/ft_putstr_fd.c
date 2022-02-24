/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:54:35 by otapan            #+#    #+#             */
/*   Updated: 2022/02/23 17:43:21 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/* int main()
{
    int s = open("olcay.txt", O_WRONLY);
    ft_putstr_fd("Kasım", s);
} */

/* int main()
{
    int s = 1;
    ft_putstr_fd("Kasım", s);
} */