/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_high.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 22:20:52 by lel-khou          #+#    #+#             */
/*   Updated: 2024/02/12 18:54:33 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_radix_a_high(t_stack *ptr, long int x)
{
	int	j;
	int	i;

	j = 0;
	while (ptr->sizea > 0 && j < 10)
	{
		i = ptr->a[ptr->sizea - 1];
		while (ptr->a[0] != i)
		{
			if (lowest_nb(ptr->a[0] % x, x) == j)
				ft_pb(ptr);
			else
				ft_rotate("a\n", ptr->a, ptr);
		}
		if (lowest_nb(ptr->a[0] % x, x) == j || ptr->sizea == 1)
			ft_pb(ptr);
		else
			ft_rotate("a\n", ptr->a, ptr);
		j++;
	}
}

void	ft_sort_high(t_stack *ptr)
{
	int			i;
	long int	x;

	i = 1;
	x = 10;
	longest_digit(ptr);
	while (i <= ptr->n)
	{
		ft_radix_a_high(ptr, x);
		x = x * 10;
		i++;
		if (i < ptr->n || ft_is_even(ptr->n) == 0)
		{
			ft_radix_b(ptr, x);
			x = x * 10;
			i++;
		}
	}
	if (ft_is_even(ptr->n) == 1)
	{
		while (ptr->sizeb > 0)
			ft_pa(ptr);
	}
}