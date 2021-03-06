/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyliz <otapan@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:46:35 by cyalniz           #+#    #+#             */
/*   Updated: 2022/03/04 15:42:54 by cyliz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int ch)
{
	if (!str)
		return (0);
	while (*str != '\0' && (char)ch != *str)
		str++;
	if ((char)ch == *str)
		return ((char *)str);
	return (0);
}
//gcc -Wall -Wextra -Werror *.c
char	*ft_get_one_line(char *left_str) // alt satira kayma durumundan kurtulmak icin
{//substr ile de yapılabilir
	int		i;
	char	*str;
	i = 0;
	if (!left_str[i])
		return (NULL);
	while (left_str[i] && left_str[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (left_str[i] && left_str[i] != '\n')
	{
		str[i] = left_str[i];
		i++;
	}
	if (left_str[i] == '\n')
	{
		str[i] = left_str[i];
		i++;
	}
	str[i] = '\0';
	return (str);
// hoşçakal çağrı :D
//ben çıkıyorum kendinize iyi bakın @cagriyalniz
//sohbet deneme
	/*char	*read_line;

	if (!left_str[0])
		return (NULL);
	read_line = ft_substr(left_str, 0,
	(ft_strchr(left_str, '\n') - left_str + 1));
	if (!read_line)
		return (NULL);
	return (read_line);*/
}

// static olarak tanimlanan degiskende bir onceki satir haricindeki tutma
char	*ft_new_left_str(char *left_str) 
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (left_str[i] && left_str[i] != '\n')
		i++;
	if (!left_str[i])
	{
		free(left_str);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(left_str) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (left_str[i])
		str[j++] = left_str[i++];
	str[j] = '\0';
	free(left_str);
	return (str);
}
// \n gorene kadar elemanlari tutma(alt satira kayma durumunda 
//ft_get_one_line fonksiyonu kullaniliyor)
char	*ft_search_n_str(int fd, char *left_str) 
{
	char	*buff;
	int		rd_bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(left_str, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rd_bytes] = '\0';
		left_str = ft_strjoin(left_str, buff);
	}
	free(buff);
	return (left_str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*left_str;  
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	left_str = ft_search_n_str(fd, left_str);
	if (!left_str)
		return (NULL);
	line = ft_get_one_line(left_str);
	printf("------>>>lftstr: %s\n", left_str);
	left_str = ft_new_left_str(left_str); 
	return (line);
}
int main()
{
	int fd;
	fd = open("deneme", O_RDONLY);
	printf("1. satir: %s \n",  get_next_line(fd));
	printf("2. satir: %s \n",get_next_line(fd));
	printf("3. satir: %s \n",  get_next_line(fd));
	printf("4. satir: %s \n",get_next_line(fd));
	printf("5. satir: %s \n",  get_next_line(fd));
	printf("6. satir: %s \n",get_next_line(fd));
}

//a\nbc\nde