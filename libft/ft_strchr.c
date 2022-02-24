/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:41:17 by otapan            #+#    #+#             */
/*   Updated: 2022/02/24 11:50:26 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, unsigned int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}

/* int main(void)
{

    char string1[] = {"/home/test/sample"};

    //printf("%s\n", strchr(string1, 't'));
    printf("%s\n", ft_strchr(string1, 't'));
    printf("---------------\n");

   // printf("%s\n", strchr(string1, 'a'));
    printf("%s\n", ft_strchr(string1, 'u'));
} */