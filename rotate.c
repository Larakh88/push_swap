/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:19:01 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/16 15:59:30 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
/*
void	ft_ra(t_stack *ptr)
{

}

void	ft_rb(t_stack *ptr)
{
	
}

void	ft_rr(t_stack *ptr)
{
	
}
*/
void	ft_rra(t_stack *ptr)
{
	int	temp;
	int	i;

	i = ptr->sizea - 1;
	temp = ptr->a[ptr->sizea - 1];
	while (i > 0)
	{
		ptr->a[i] = ptr->a[i - 1];
		i--;
	}
	ptr->a[i] = temp;
	ft_putstr_fd("rra\n", 1);
}
/*
void	ft_rrb(t_stack *ptr)
{
	
}
*/