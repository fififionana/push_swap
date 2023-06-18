/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:45:00 by frushiti          #+#    #+#             */
/*   Updated: 2023/06/16 16:47:05 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ps_lstnew(char *bin, int index)
{
	t_stack	*new_element;

	new_element = (t_stack *)malloc(sizeof(t_stack));
	if (new_element == NULL)
		exit(EXIT_FAILURE);
	new_element->content = bin;
	new_element->index = index;
	new_element->next = NULL;
	return (new_element);
}

t_stack	*ps_lstlast(t_stack *lst)
{
	if (lst == 0)
		return (0);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}

void	ps_lstadd_back(t_stack **lst, t_stack *next)
{
	t_stack	*last;

	last = ps_lstlast(*lst);
	if (last != 0)
		last->next = next;
	else
		*lst = next;
}

t_stack	*ps_lstprevlast(t_stack *lst)
{
	if (lst == 0)
		return (0);
	while (lst->next->next != 0)
		lst = lst->next;
	return (lst);
}

void	ps_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}
