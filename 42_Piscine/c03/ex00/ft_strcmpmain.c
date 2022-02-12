int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	char s1[] = "Olcay Tapan";
	char s2[] = "Ismail Tapan";
	char s3[] = "Cafer Agabeyim";
	
	printf("s(12): %d, s(21): %d\n", ft_strcmp(s1, s2), ft_strcmp(s2, s1));
	printf("s(13): %d, s(31): %d\n", ft_strcmp(s1, s3), ft_strcmp(s3, s1));
	printf("s(23): %d, s(32): %d\n",ft_strcmp(s2, s3),ft_strcmp(s3, s2));
}
