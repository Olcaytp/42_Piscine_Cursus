/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:16:59 by cyalniz           #+#    #+#             */
/*   Updated: 2022/03/04 15:50:39 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// tanımlı değilse getnextline header ımızı tanımlıyoruz.
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
// kullanacağımız kütüphaneleri ekliyoruz.
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h> // read fonksiyonunun çalışması için bu kütüphane kullanıldı.
// aynı şekilde buffer_size ı tanımlıyoruz.
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5 //okuyacağımız karakter sayısını belirtiyoruz. 
# endif
// kullanacağımız fonksiyonlarıun prototiplerini yazıyoruz.
char	*get_next_line(int fd);
char	*ft_new_left_str(char *left_str);
char	*ft_search_n_str(int fd, char *left_str);
char	*ft_get_one_line(char *left_str);

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int ch);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif