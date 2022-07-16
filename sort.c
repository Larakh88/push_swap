/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:18:28 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/16 15:59:33 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_sort_select(t_stack *ptr)
{
	if (ptr->sizea == 2)
		ft_sort_2(ptr);
	if (ptr->sizea == 3)
		ft_sort_3(ptr);
//	if (ptr->sizea > 3 && ptr->sizea < 7)
//		ft_sort_5(ptr);
}

void	ft_sort_2(t_stack *ptr)
{
	if (ptr->a[0] > ptr->a[1])
		ft_sa(ptr->a, ptr);
}

void	ft_sort_3(t_stack *ptr)
{
	while (check_sort(ptr->a, ptr) == 1)
	{
		if (ptr->a[0] < ptr->a[1])
			ft_rra(ptr);
		else
			ft_sa(ptr->a, ptr);
	}
}