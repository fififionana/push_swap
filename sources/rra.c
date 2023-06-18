/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:51:30 by frushiti          #+#    #+#             */
/*   Updated: 2023/06/16 16:51:52 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_all *all)
{
	t_stack	*prev_last;
	t_stack	*last;

	if (all->a)
	{
		last = all->a;
		prev_last = NULL;
		while (last->next != NULL)
		{
			prev_last = last;
			last = last->next;
		}
		prev_last->next = NULL;
		last->next = all->a;
		all->a = last;
		ft_putstr_fd("rra\n", 1);
	}
}
