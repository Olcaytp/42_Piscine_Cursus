#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *text[10];

	text[0] = "Olcay";
	text[1] = "is";
	text[2] = "preparing";
	text[3] = "for";
	text[4] = "the";
	text[5] = "exam";
	text[6] = "-";
	text[7] = "\' - \'";
	text[8] = "today";
	text[9] = "!";

	printf("%s\n", ft_strjoin(10, text, " - "));
}
