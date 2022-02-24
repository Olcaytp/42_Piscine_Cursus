/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:14:46 by otapan            #+#    #+#             */
/*   Updated: 2022/02/18 15:31:10 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
//listenin her elemani icin f fonksiyonu uygulanir.

void    ft_up(void *cntnt)
{
    int i = 0;
    while (((char *)cntnt)[i] != '\0')
    {
        ((char *)cntnt)[i] -=32;
        i++;
    }
}
int main()
{
    t_list *x;
    char z[] = "zz";
    char y[] = "yy";
   x = ft_lstnew(z);
    ft_lstadd_front(&x, ft_lstnew(y));
    ft_lstiter(x,ft_up);

    while(x)
    {
        printf("%s", x->content);
        x = x->next;
    }
}