/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 12:58:37 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/04/18 15:39:30 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print(t_list *list)
{
	while (list)
	{
		ft_putnbr(list->nb);
		list = list->next;
		ft_putchar('\n');
	}
	ft_putchar('\n');
}
