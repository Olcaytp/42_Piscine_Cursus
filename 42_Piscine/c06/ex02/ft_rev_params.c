/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:49:47 by otapan            #+#    #+#             */
/*   Updated: 2021/12/12 10:53:59 by otapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	d;

	i = argc - 1;
	d = 0;
	if (argc > 1)
	{
		while (i > 0)
		{
			d = 0;
			while (argv[i][d] != '\0')
			{
				write(1, &argv[i][d], 1);
				d++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
