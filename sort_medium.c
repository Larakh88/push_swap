/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 22:20:52 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/23 21:40:02 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	longest_digit(t_stack *ptr)
{
	int	i;

	i = 1;
	ptr->n = ft_nb_length(ptr->a[0]);
	while (i < ptr->sizea)
	{
		if (ft_nb_length(ptr->a[i]) > ptr->n)
			ptr->n = ft_nb_length(ptr->a[i]);
		i++;
	}
}

void	ft_radix_a(t_stack *ptr, long int x)
{
	int	j;
	int	i;

	j = 0;
	while (ptr->sizea > 0 && j < 10)
	{
		i = ptr->a[ptr->sizea - 1];
		while (ptr->a[0] != i)
		{
			if (lowest_nb(abs_value(ptr->a[0]) % x, x) == j)
				ft_pb(ptr);
			else
				ft_rotate("a\n", ptr->a, ptr);
		}
		if (lowest_nb(abs_value(ptr->a[0]) % x, x) == j || ptr->sizea == 1)
			ft_pb(ptr);
		else
			ft_rotate("a\n", ptr->a, ptr);
		j++;
	}
}

void	ft_radix_b(t_stack *ptr, long int x)
{
	int	j;
	int	i;

	j = 9;
	while (ptr->sizeb > 0 && j >= 0)
	{
		i = ptr->b[ptr->sizeb - 1];
		while (ptr->b[0] != i)
		{
			if (lowest_nb(abs_value(ptr->b[0]) % x, x) == j)
				ft_pa(ptr);
			else
				ft_rotate("b\n", ptr->b, ptr);
		}
		if (lowest_nb(abs_value(ptr->b[0]) % x, x) == j || ptr->sizeb == 1)
			ft_pa(ptr);
		else
			ft_rotate("b\n", ptr->b, ptr);
		j--;
	}
}

void	move_neg(t_stack *ptr)
{
	int	end;
	int	i;

	end = ptr->a[ptr->sizea - 1];
	i = 0;
	while (ptr->a[i] != end)
	{
		if (ptr->a[i] < 0)
			ft_pb(ptr);
		else
			ft_rotate("a\n", ptr->a, ptr);
	}
	if (ptr->a[i] < 0)
		ft_pb(ptr);
	else
		ft_rotate("a\n", ptr->a, ptr);
	while (ptr->sizeb > 0)
	{
		ft_rrotate("rb\n", ptr->b, ptr);
		ft_pa(ptr);
	}
}

void	ft_sort_medium(t_stack *ptr)
{
	int			i;
	long int	x;

	i = 1;
	x = 10;
	longest_digit(ptr);
	while (i <= ptr->n)
	{
		ft_radix_a(ptr, x);
		x = x * 10;
		i++;
		if (i <= ptr->n)
		{
			ft_radix_b(ptr, x);
			x = x * 10;
			i++;
		}
	}
	move_neg(ptr);
}