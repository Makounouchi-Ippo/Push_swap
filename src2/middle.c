/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   middle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:16:40 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/04/18 15:42:48 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		middle(t_list **pa, int i)
{
	t_list	*a;
	t_list	*z;
	int		mid;
	int		max;

	a = *pa;
	z = *pa;
	mid = 0;
	max = 0;
	while (z)
	{
		if (max == ft_list_size(*pa) / i + 1)
			return (mid);
		max = ft_list_size(*pa);
		mid = z->nb;
		a = *pa;
		while (a)
		{
			if (mid < a->nb)
				max--;
			a = a->next;
		}
		z = z->next;
	}
	return (mid);
}
