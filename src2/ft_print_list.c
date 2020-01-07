/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 12:58:37 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/04/18 15:42:29 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print(t_list *pa, t_list *pb)
{
	ft_putstr("PILE A = ");
	while (pa)
	{
		ft_putnbr(pa->nb);
		pa = pa->next;
		ft_putstr("  -  ");
	}
	ft_putchar('\n');
	ft_putstr("PILE B = ");
	while (pb)
	{
		ft_putnbr(pb->nb);
		pb = pb->next;
		ft_putstr("  -  ");
	}
	ft_putchar('\n');
	ft_putchar('\n');
}
