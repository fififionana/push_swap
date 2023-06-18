/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:47:29 by frushiti          #+#    #+#             */
/*   Updated: 2023/06/16 16:48:43 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	long_push_swap(t_all *all)
{
	int	i;

	all->limit = find_limit(all->len);
	i = 0;
	while (all->limit >= 0)
	{
		while (i < all->len)
		{
			if (all->a->content[all->limit] == '0')
				pb(all);
			else
				ra(all);
			i++;
		}
		while (all->b)
			pa(all);
		all->limit--;
		i = 0;
	}
}
