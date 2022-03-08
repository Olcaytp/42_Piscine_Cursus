/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line copy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:46:35 by cyalniz           #+#    #+#             */
/*   Updated: 2022/03/04 17:43:52 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int ch) // left_str ile \n i gönderiyoruz.
{
	if (!str)
		return (0);
	while (*str != '\0' && (char)ch != *str)
		str++;
	if ((char)ch == *str)
		return ((char *)str);
	return (0);
}
// alt satira kayma durumundan kurtulmak icin
char	*ft_get_one_line(char *left_str) //left_str = olcaytapanNkasi0
{
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
		//str[] = olcaytapan
		i++;
	}
	if (left_str[i] == '\n')
	{
		str[i] = left_str[i];
		i++;
		//str[] = olcaytapanN
	}
	str[i] = '\0';
	// str[] = olcaytapanN0
	return (str);
}

// static olarak tanimlanan degiskende bir onceki satir haricindeki tutma, buffersize in gittiği son noktayı gösterir
char	*ft_new_left_str(char *left_str) // left_Str = olcaytapanNkasi0, (2.örnek) 12345123N10
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (left_str[i] && left_str[i] != '\n')
		i++;
		// i = 10 oldu, 9
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
	return (str); // str = 0 oldu,  10(2.örnek)
}
// \n gorene kadar elemanlari tutma(alt satira kayma durumunda ft_get_one_line fonksiyonu kullaniliyor)
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
//read fonksiyonu fd ile gönderdiğimiz dosyanın ilk satırından buffersize kadarını okuyup buff değişkenine atıyor.
//ve buffersize değerini rdbytes a atıyor.eğer dosyamızda buffersize kadar yer yoksa olduğu kadarını atıyor.	
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		//printf("rdbytes: %d\n", rd_bytes);
//alttaki if koşulu eğer dosya yoksa, gönderilmediyse read fonksiyonundan kendisine -1 atanacak ve burdanda null dönecek.
		if (rd_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
//buff'ın son elemanına null atıyoruz. 
		buff[rd_bytes] = '\0'; //buff[]=olcay0
		left_str = ft_strjoin(left_str, buff); // ----->>s3 = olcaytapanNkasi0 = left_str
	}
	free(buff);
	return (left_str); //olcaytapanNkasi0 = left_str
}

char	*get_next_line(int fd)
{
	char		*line;
// bu değişkeni static tanımlamamızın amacı
// bir sonraki satırın kaldığımız yerinden devam edebilmek için
	static char	*left_str;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	left_str = ft_search_n_str(fd, left_str); // => returns olcaytapanNkasi0
	if (!left_str)
		return (NULL);
	line = ft_get_one_line(left_str); // => returns olcaytapanN0
	left_str = ft_new_left_str(left_str); // => null olan str 'yi döndürür => left_str = 0 oldu., (2.örnek) 10
	return (line);
}
/* int main()
{
	int fd;
	fd = open("deneme", O_RDONLY);
	printf("1. satir: %s \n",  get_next_line(fd));
	printf("2. satir: %s \n",get_next_line(fd));
	printf("3. satir: %s \n",  get_next_line(fd));
	printf("4. satir: %s \n",get_next_line(fd));
	printf("5. satir: %s \n",  get_next_line(fd));
	printf("6. satir: %s \n",get_next_line(fd));
} */
