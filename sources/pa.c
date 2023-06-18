/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:43:37 by frushiti          #+#    #+#             */
/*   Updated: 2023/06/16 16:44:11 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_all *all)
{
	t_stack	*first;

	if (all->b)
	{
		first = all->b;
		all->b = first->next;
		first->next = all->a;
		all->a = first;
		ft_putstr_fd("pa\n", 1);
	}
}
