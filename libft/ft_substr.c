/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:56:37 by otapan            #+#    #+#             */
/*   Updated: 2022/02/11 17:41:40 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <stdlib.h>
#include <string.h> */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr = NULL;

	if (!s)
		return (NULL);
	s_len = strlen(s);
	if (s_len < start)
	{
		substr[0] = '\0';
		return (substr);
	}
	substr = malloc(sizeof(char) * (len - start + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len - start)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/* 
int main()
{
	char s[] = "substr function Implementation";

	int m = 7;
	size_t n = 12;

	char* dest = ft_substr(s, m, n);

	printf("%s\n", dest);

	return 0;
} */