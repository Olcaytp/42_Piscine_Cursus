/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:44:51 by otapan            #+#    #+#             */
/*   Updated: 2022/02/12 12:47:19 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checker(const char *a, char b)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == b)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	int		i;
	int		son;
	int		baslangic;
	char	*str;

	son = ft_strlen(s1);
	baslangic = 0;
	while (s1[baslangic] != '\0' && checker(s2, s1[baslangic]))
		baslangic++;
	while (baslangic < son && checker(s2, s1[son - 1]))
		son--;
	str = (char *)malloc(sizeof(char) * (son - baslangic + 1));
	if (!str)
		return (0);
	i = 0;
	while (baslangic < son)
	{
		str[i] = s1[baslangic];
		i++;
		baslangic++;
	}
	str[i] = '\0';
	return (str);
}

int	main()
{
	char	a[] = "Hello";
	char	b[] = "H";

	printf("%s", ft_strtrim(a, b));
}