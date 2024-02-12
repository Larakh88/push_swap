/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 22:20:52 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/25 19:33:42 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_radix_a(t_stack *ptr, long int x)
{
	int	j;
	int	k;

	j = 0;
	while (ptr->sizea > 0 && j < 10)
	{
		k = 0;
		while (k < 10)
		{
			if (lowest_nb(ptr->a[0] % x, x) == j)
			{
				ft_pb(ptr);
				k++;
			}
			else
				ft_rotate("a\n", ptr->a, ptr);
		}
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
			if (lowest_nb(ptr->b[0] % x, x) == j)
				ft_pa(ptr);
			else
				ft_rotate("b\n", ptr->b, ptr);
		}
		if (lowest_nb(ptr->b[0] % x, x) == j || ptr->sizeb == 1)
			ft_pa(ptr);
		else
			ft_rotate("b\n", ptr->b, ptr);
		j--;
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
