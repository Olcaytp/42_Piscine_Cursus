/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:20:21 by otapan            #+#    #+#             */
/*   Updated: 2022/02/23 17:30:17 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	character;

	ptr = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == character)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
static void check_print(char *ptr, char string[])
{
	if (ptr != NULL)
	{
		printf("'c' found at position %lu.\n", ptr - string + 1);
		printf("search character found:  %s\n", ptr);
	}
	else
		printf("search character not found\n");
}
/* 
int main(void)
{

	char string1sys[] = "Aticleworld";
	char *ptr1sys = ft_memchr(string1sys, 'c', sizeof(string1sys));
	check_print(ptr1sys, string1sys);
	printf("---------------\n");
	return 0;
} */