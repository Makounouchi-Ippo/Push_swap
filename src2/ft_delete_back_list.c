/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_back_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:12:21 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/04/18 15:41:39 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_list		*ft_delete_back_list(t_list *begin_list)
{
	t_list *tmp;
	t_list *before;

	if (begin_list == NULL)
		return (begin_list);
	if (begin_list->next == NULL)
	{
		free(begin_list);
		begin_list = NULL;
		return (begin_list);
	}
	tmp = begin_list;
	before = begin_list;
	while (tmp->next)
	{
		before = tmp;
		tmp = tmp->next;
	}
	before->next = NULL;
	free(tmp);
	tmp = NULL;
	return (begin_list);
}
