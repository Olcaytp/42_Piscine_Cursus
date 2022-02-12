/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:54:57 by otapan            #+#    #+#             */
/*   Updated: 2021/12/13 11:25:46 by otapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char chr)
{
    write(1, &chr, 1);
}
void    ft_putstr(char *str, int new_line)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i++]);
    }
    if (new_line)
        ft_putchar('\n');
}
int ft_strcmp(char *str1, char *str2)
{
    int index;
    index = 0;
    while (str1[index] && str2[index] && str1[index] == str2[index])
    {
        index++;
    }
    return (str1[index] - str2[index]);
}
void    ft_swap(char **str1, char **str2)
{
    char    *temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
int main(int argc, char **argv)
{
    int i;
    int j;
    i = 1;
    while (i < argc - 1)
    {
        j = 1;
        while (j < argc - 1)
        {
            if (ft_strcmp(argv[j], argv[j + 1]) > 0)
                ft_swap(&argv[j], &argv[j + 1]);
            j++;
        }
        i++;
    }
    j = 1;
    while (j < argc)
    {
        ft_putstr(argv[j], 1);
        j++;
    }
    return (0);
}

