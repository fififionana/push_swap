/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:50:52 by frushiti          #+#    #+#             */
/*   Updated: 2023/06/16 16:51:21 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_all *all)
{
	t_stack	*first;
	t_stack	*last;

	if (all->a)
	{
		first = all->a;
		last = all->a;
		while (last->next != NULL)
			last = last->next;
		all->a = first->next;
		first->next = NULL;
		last->next = first;
		ft_putstr_fd("ra\n", 1);
	}
}
