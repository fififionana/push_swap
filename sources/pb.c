/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:44:20 by frushiti          #+#    #+#             */
/*   Updated: 2023/06/16 16:44:43 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_all *all)
{
	t_stack	*first;

	if (all->a)
	{
		first = all->a;
		all->a = first->next;
		first->next = all->b;
		all->b = first;
		ft_putstr_fd("pb\n", 1);
	}
}
