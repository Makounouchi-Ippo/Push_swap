/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:48:50 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/04/18 15:43:57 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	reverse_rotate_a(t_list **pa)
{
	t_list *tmp;

	tmp = ft_list_last(*pa);
	if (*pa)
	{
		if ((*pa)->next)
		{
			ft_list_push_front(pa, tmp->nb);
			*pa = ft_delete_back_list(*pa);
		}
	}
	ft_putendl("rra");
	return (0);
}

int	reverse_rotate_b(t_list **pb)
{
	t_list *tmp;

	tmp = ft_list_last(*pb);
	if (*pb)
	{
		if ((*pb)->next)
		{
			ft_list_push_front(pb, tmp->nb);
			*pb = ft_delete_back_list(*pb);
		}
	}
	ft_putendl("rrb");
	return (0);
}
