/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 12:11:59 by mehel-ka          #+#    #+#             */
/*   Updated: 2018/04/18 15:39:36 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		instructions(char *line, t_list **pa, t_list **pb)
{
	if (ft_strcmp("sa", line) == 0)
		swap(line, pa, pb);
	else if (ft_strcmp("sb", line) == 0)
		swap(line, pa, pb);
	else if (ft_strcmp("ss", line) == 0)
		swap(line, pa, pb);
	else if (ft_strcmp("pa", line) == 0)
		push(line, pa, pb);
	else if (ft_strcmp("pb", line) == 0)
		push(line, pa, pb);
	else if (ft_strcmp("ra", line) == 0)
		rotate(line, pa, pb);
	else if (ft_strcmp("rb", line) == 0)
		rotate(line, pa, pb);
	else if (ft_strcmp("rr", line) == 0)
		rotate(line, pa, pb);
	else if (ft_strcmp("rra", line) == 0)
		reverse_rotate(line, pa, pb);
	else if (ft_strcmp("rrb", line) == 0)
		reverse_rotate(line, pa, pb);
	else if (ft_strcmp("rrr", line) == 0)
		reverse_rotate(line, pa, pb);
	return (0);
}
