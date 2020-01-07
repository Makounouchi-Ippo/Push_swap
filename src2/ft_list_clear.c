/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagaloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 12:49:24 by nagaloul          #+#    #+#             */
/*   Updated: 2018/04/18 15:41:59 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;
	t_list *tmp;

	if (begin_list != NULL)
	{
		list = *begin_list;
		while (list)
		{
			tmp = list->next;
			free(list);
			list = tmp;
		}
		*begin_list = NULL;
	}
}
