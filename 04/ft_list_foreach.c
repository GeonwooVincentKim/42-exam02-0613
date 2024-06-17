/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:05:00 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/17 17:07:42 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

typedef struct	s_list
{
	struct s_struct	*next;
	void			*data;
}	t_list;

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
