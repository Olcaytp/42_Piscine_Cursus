/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:02:24 by otapan            #+#    #+#             */
/*   Updated: 2022/02/24 14:49:31 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (lst == NULL || f == NULL)
		return (NULL);
	first = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
 */
// lst nin tum elemanlarina f fonksiyonu uygulanir
// uygulama sonucunda olusan yeni elemanlar ile (25. satir)
// yeni bir liste olusturulur 31. satir
// gerekli durumlarda (lst bittikten sonra) veya f null dondurunce
// yeni olusturulan first degiskeninin icerisi temizlenir 
// ve  delete ile silinir.
#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *tmp;
    t_list  *ret;

    if (lst == NULL || f == NULL)
        return (NULL);
    ret = 0;
    while (lst)
    {
        tmp = ft_lstnew(f(lst -> content));
        if (!tmp)
        {
            ft_lstclear(&ret, del);
            return (NULL);
        }
        ft_lstadd_back(&ret, tmp);
        lst = lst -> next;
    }
    return (ret);
}

#include <stdio.h>
void    del(void *con)
{
    ft_bzero(con, sizeof(con));
}
void    *fa(void *content)
{
    content = content + 2;
    return (content);
}
int main(void)
{
    t_list  *liste = ft_lstnew((void *)49);
    t_list  *tut;
    size_t  i;

    for (i = 50; i < 55; i++)
    {
        ft_lstadd_back(&liste, ft_lstnew((void *)i));
    }
    tut = ft_lstmap(liste, fa, sil);
    printf("liste :\n");
    for (i = 49; i < 55; i++)
    {
        printf("%c - ",(char)(liste -> content));
        liste = liste -> next;
    }
    printf("\nsonuc :\n");
    for (i = 49; i < 55; i++)
    {
        printf("%c - ",(char)(tut -> content));
        tut = tut -> next;
    }

}