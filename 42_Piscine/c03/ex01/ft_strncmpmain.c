int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	while ((i < n) && !diff && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
    if (i < n && !diff && (s1[i] == '\0' || s2[i] == '\0'))
        diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diff);
}

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main()
{
	char s1[] = "Olcay Tapan";
	char s2[] = "Olday Tapan";
	char s3[] = "Cafer Agabeyim";

	printf("s(1-2): %d, s(2-1): %d\n", ft_strncmp(s1, s2, 5), ft_strncmp(s2, s1, 5));
	printf("s(1-3): %d, s(3-1): %d\n", ft_strncmp(s1, s3, 2), ft_strncmp(s3, s1, 2));
	printf("s(2-3): %d, s(3-2): %d\n",ft_strncmp(s2, s3, 5),ft_strncmp(s3, s2, 5));
}
