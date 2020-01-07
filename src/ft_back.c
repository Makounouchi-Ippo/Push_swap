/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_back.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:54:21 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/04/18 15:38:34 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_list_push_back(t_list **begin_list, int i)
{
	t_list *list;

	list = *begin_list;
	if (list)
	{
		while (list && list->next)
			list = list->next;
		list->next = ft_create_elem(i);
	}
	else
		*begin_list = ft_create_elem(i);
}
