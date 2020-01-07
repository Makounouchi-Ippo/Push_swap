/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:55:43 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/04/18 15:38:40 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_list	*ft_create_elem(int i)
{
	t_list *list;

	list = NULL;
	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->nb = i;
	list->next = NULL;
	return (list);
}
