/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:13:25 by otapan            #+#    #+#             */
/*   Updated: 2022/02/12 17:32:36 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>  */

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	i;
	unsigned int	j;
	char			*out_str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	j = -1;
	out_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!out_str)
		return (NULL);
	while (s1[i])
	{
		out_str[i] = s1[i];
		i++;
	}
	while (s2[++j])
		out_str[i++] = s2[j];
	out_str[i] = '\0';
	return (out_str);
}
/* 
int main(void)
{
    char s1[] = "olcay";
    char s2[] = "enes";
    
	char* dest = ft_strjoin(s1, s2);

	printf("%s\n", dest);    
    
} */
