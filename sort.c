/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:18:28 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/23 00:37:04 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_sort_select(t_stack *ptr)
{
	if (ptr->sizea == 1)
		ft_error("", 0, ptr);
	if (ptr->sizea == 2)
		ft_sort_2("a\n", ptr->a, ptr);
	if (ptr->sizea == 3)
		ft_sort_3("a\n", ptr->a, ptr);
	if (ptr->sizea > 3 && ptr->sizea < 6)
		ft_sort_5(ptr);
	if (ptr->sizea > 6 && ptr->sizea < 100)
		ft_sort_medium(ptr);
	ft_error("", 0, ptr);
}

void	ft_sort_2(char *str, int *array, t_stack *ptr)
{
	if (check_sort(array, ptr) == 1)
		ft_swap(str, array, ptr);
}

void	ft_sort_3(char *str, int *array, t_stack *ptr)
{
	while (check_sort(array, ptr) == 1)
	{
		if (array[0] > array[1] && array[0] > array[2])
			ft_rotate(str, array, ptr);
		else if (array[0] < array[1])
		{
			ft_putstr_fd("r", 1);
			ft_rrotate(str, array, ptr);
		}
		else
			ft_swap(str, array, ptr);
	}
}

void	ft_sort_5(t_stack *ptr)
{
	int	i;

	i = ptr->sizea - 3;
	while (i-- > 0)
		ft_pb(ptr);
	ft_sort_3("a\n", ptr->a, ptr);
	ft_sort_2("b\n", ptr->b, ptr);
	ft_merge(ptr);
}

void	ft_merge(t_stack *ptr)
{
	if (ptr->a[0] < ptr->b[0] && ptr->a[0] < ptr->b[ptr->sizeb - 1])
		ft_rotate("a\n", ptr->a, ptr);
	while (ptr->sizeb > 0)
	{
		if (ptr->a[0] > ptr->b[0] && ptr->a[ptr->sizea - 1] \
		> ptr->b[ptr->sizeb - 1] && ptr->a[0] > ptr->b[ptr->sizeb - 1])
		{
			ft_pa(ptr);
			ft_pa(ptr);
			ft_swap("a\n", ptr->a, ptr);
		}
		else if (ptr->a[0] > ptr->b[0] || \
		(ptr->a[0] < ptr->b[0] && check_sort(ptr->a, ptr) == 0))
		{
			ft_pa(ptr);
			ft_rotate("a\n", ptr->a, ptr);
		}
		else
			ft_rotate("a\n", ptr->a, ptr);
	}
	while (check_sort(ptr->a, ptr) == 1)
	{
		ft_rotate("a\n", ptr->a, ptr);
	}
}