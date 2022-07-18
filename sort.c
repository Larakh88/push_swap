/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:18:28 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/18 12:40:36 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_sort_select(t_stack *ptr)
{
	if (ptr->sizea == 2)
		ft_sort_2(ptr->a, ptr);
	if (ptr->sizea == 3)
		ft_sort_3(ptr->a, ptr);
	if (ptr->sizea > 3 && ptr->sizea < 7)
		ft_sort_5(ptr);
}

void	ft_sort_2(int *a, t_stack *ptr)
{
	if (a[0] > a[1])
		ft_swap("sa\n", a, ptr);
}

void	ft_sort_3(int *a, t_stack *ptr)
{
	while (check_sort(a, ptr) == 1)
	{
		if (a[0] < a[1])
			ft_rrotate("rra\n", ptr->a, ptr);
		else
			ft_swap("sa\n", a, ptr);
	}
}

void	ft_sort_5(t_stack *ptr)
{
	int	i;

	i = ptr->sizea - 3;
	while (i-- > 0)
		ft_pb(ptr);
	ft_sort_3(ptr->a, ptr);
	ft_sort_3(ptr->b, ptr);
}