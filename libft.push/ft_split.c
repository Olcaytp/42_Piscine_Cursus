/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:56:11 by otapan            #+#    #+#             */
/*   Updated: 2022/02/14 15:54:49 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_make_words(char *word, char const *s, int j, int word_ln)
{
	int	i;

	i = 0;
	while (word_ln > 0)
		word[i++] = s[j - word_ln--];
	word[i] = 0;
	return (word);
}

static char	**ft_split_words(char **res, char const *s, char c, int word_ct)
{
	int	i;
	int	j;
	int	word_ln;

	i = 0;
	j = 0 ;
	word_ln = 0;
	while (s[j] && i < word_ct)
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			j++;
			word_ln++;
		}
		res[i] = (char *)malloc(sizeof(char) * (word_ln + 1));
		if (!res[i])
			return (NULL);
		ft_make_words (res[i], s, j, word_ln);
		word_ln = 0;
		i++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		word_ct;
	char	**res;

	if (s == NULL)
		return (NULL);
	word_ct = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (word_ct + 1));
	if (!res)
		return (NULL);
	ft_split_words (res, s, c, word_ct);
	return (res);
}
/* 
int	main(void)
{
	int		i;
	char	**a;

			i = 0;
			a = ft_split("marhaba.selamlar.mmm", '.');
	printf("%s\n", a[0]);
	printf("%s\n", a[1]);
	printf("%s", a[2]);
} */
