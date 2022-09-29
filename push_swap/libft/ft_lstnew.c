/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:45:31 by otapan            #+#    #+#             */
/*   Updated: 2022/07/01 08:57:23 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_struct	*ft_lstnew(int value)
{
	t_struct	*cntn;

	cntn = (t_struct *)malloc(sizeof(t_struct));
	if (!cntn)
		return (NULL);
	cntn->value = value;
	cntn->index = -1;
	cntn->next = NULL;
	return (cntn);
}
