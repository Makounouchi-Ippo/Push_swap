/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 13:01:32 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/04/18 15:42:36 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*list;

	list = begin_list;
	i = 0;
	if (!list)
		return (0);
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}
