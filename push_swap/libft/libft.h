/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:35:04 by otapan            #+#    #+#             */
/*   Updated: 2022/07/01 08:48:31 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_struct
{
	int				value;
	int				index;
	struct s_struct	*next;
}t_struct;

//is
bool		ft_isdigit(int c);

//to
int			ft_atoi(const char *ch);
long		ps_atoll(char *str);

//bonus
t_struct	*ft_lstnew(int value);
void		ft_lstadd_front(t_struct **lst, t_struct *new);
int			ft_lstsize(t_struct *lst);
t_struct	*ft_lstlast(t_struct *lst);
void		ft_lstadd_back(t_struct **lst, t_struct *new);

#endif
