/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:44:19 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/04/18 15:40:09 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static	int	rotate_a(t_list **pa)
{
	t_list	*tmp;

	tmp = *pa;
	if (*pa)
	{
		if ((*pa)->next)
		{
			*pa = (*pa)->next;
			ft_list_push_back(pa, tmp->nb);
		}
	}
	free(tmp);
	tmp = NULL;
	return (0);
}

static	int	rotate_b(t_list **pb)
{
	t_list	*tmp;

	tmp = *pb;
	if (*pb)
	{
		if ((*pb)->next)
		{
			*pb = (*pb)->next;
			ft_list_push_back(pb, tmp->nb);
		}
	}
	free(tmp);
	tmp = NULL;
	return (0);
}

int			rotate(char *line, t_list **pa, t_list **pb)
{
	if (ft_strcmp("ra", line) == 0)
		rotate_a(pa);
	if (ft_strcmp("rb", line) == 0)
		rotate_b(pb);
	if (ft_strcmp("rr", line) == 0)
	{
		rotate_a(pa);
		rotate_b(pb);
	}
	return (0);
}
