/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:42:07 by frushiti          #+#    #+#             */
/*   Updated: 2023/06/16 16:42:29 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_limit(int len)
{
	int	limit;

	limit = 0;
	while ((len / 2) != 0)
	{
		limit++;
		len = len / 2;
	}
	return (limit);
}

char	*ft_itob(int len, int num)
{
	int		c;
	int		d;
	int		t;
	char	*p;
	int		limit;

	limit = find_limit(len);
	t = 0;
	p = (char *)malloc((sizeof(char *) * limit) + 1);
	if (p == NULL)
		exit(EXIT_FAILURE);
	c = limit;
	while (c >= 0)
	{
		d = num >> c;
		if (d & 1)
			*(p + t) = 1 + '0';
		else
			*(p + t) = 0 + '0';
		t++;
		c--;
	}
	*(p + t) = '\0';
	return (p);
}

char	**string_bin(int len, int *num)
{
	int		i;
	char	**string_bin;

	string_bin = (char **)malloc((sizeof(char **) * len) + 1);
	if (string_bin == NULL)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < len)
	{
		string_bin[i] = ft_itob(len, num[i]);
		i++;
	}
	return (string_bin);
}
