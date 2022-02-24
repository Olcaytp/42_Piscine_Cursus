/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:13:30 by otapan            #+#    #+#             */
/*   Updated: 2022/02/18 16:36:59 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	ptr = *lst;
	while (ptr)
	{
		ptr = ptr->next;
		if ((*lst)->next != NULL)
			(*lst)->next = NULL;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	free(ptr);
}
/* void	del(void *content)
{
	ft_bzero(content, strlen(content));
} */
// verilen lst struct listesi gezilir
// gecici olarak ptr degiskininde lst yi tutariz.
// tum degerler silinir.
int main()
{
    t_list *x;
    char y[] = "cagri";
    x = ft_lstnew(y);
    //printf("%s", x->content);
    char z[] = "aaa";
    //ft_lstadd_front(&x, ft_lstnew(y));
    ft_lstadd_front(&x,ft_lstnew(z));

    //printf("%s\n", x->content);
    while(x)
    {
        printf("%s\n", x->content);
        x = x->next;
    }
	ft_lstclear(x, del(x->content));
}