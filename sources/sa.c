/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:52:02 by frushiti          #+#    #+#             */
/*   Updated: 2023/06/16 16:52:28 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_all *all)
{
	char	*a;
	char	*b;

	if (all->a)
	{
		a = all->a->content;
		b = all->a->next->content;
		all->a->content = b;
		all->a->next->content = a;
		ft_putstr_fd("sa\n", 1);
	}
}
