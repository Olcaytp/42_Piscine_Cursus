/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:54:30 by otapan            #+#    #+#             */
/*   Updated: 2022/02/18 14:56:47 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

//bir struct verilir ve eger o bos ise direkt return edilir.
// eger bos degilse verilen del fonksiyonuna lst nin contenti verilir
// silinir, en sonda da free ile lst bellekten silinir.
// === BEGINNING OF MY TEST ===
void	del(void *content)
{
	ft_bzero(content, strlen(content));
}
/* //  gcc ft_lstdelone.c ft_lstadd_back.c ft_lstsize.c ft_lstnew.c 
//ft_lstlast.c ft_bzero.c ft_memset.c
int main()
{
    t_list *liste;
    char x[] = "xyz";
    liste = ft_lstnew(x);
    char *mac = ft_strdup(liste->content);
    printf("%s \n", liste->content);    
    ft_lstdelone(liste, del);
    int i = 0;
    while (*mac)
    {
        printf("%c\n", *mac);
        mac++;
    }
    
    printf("boş mu geldi acaba: %s", liste->content);
} */