/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:19:03 by otapan            #+#    #+#             */
/*   Updated: 2022/02/12 16:25:11 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	index;

	index = 0;
	if (s == 0)
		return ;
	while (s[index])
	{
		(f)(index, &s[index]);
		index++;
	}
}
/* void	iter(unsigned int i, char *s)
{
	*s += 32;
	printf("...%d --> %c\n", i, *s);
}
int	main()
{
	char s[] = "ABCD";
	ft_striteri(s, iter);
	printf("%s \n", s);
	return (0);
} */
