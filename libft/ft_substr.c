/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:56:37 by otapan            #+#    #+#             */
/*   Updated: 2022/02/24 14:05:58 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	index;
	unsigned int	index2;

	index = 0;
	index2 = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
		return (ft_strdup(""));
	while (index < len && s[index + start] != '\0')
		index++;
	dest = (char *)malloc((sizeof(char) * index) + 1);
	if (dest == NULL)
		return (NULL);
	index = 0;
	while (s[index2] != '\0')
	{
		if (index2 >= start && index < len)
			dest[index++] = s[start++];
		index2++;
	}
	dest[index] = '\0';
	return (dest);
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
