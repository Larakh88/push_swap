/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:19:01 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/16 15:59:28 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_sa(int *a, t_stack *ptr)
{
	int	temp;

	if (ptr->sizea > 1)
	{
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
		ft_putstr_fd("sa\n", 1);
	}
}

void	ft_sb(int *b, t_stack *ptr)
{
	int	temp;

	if (ptr->sizeb > 1)
	{
		temp = b[0];
		b[0] = b[1];
		b[1] = temp;
		ft_putstr_fd("sb\n", 1);
	}
}

void	ft_ss(int *a, int *b, t_stack *ptr)
{
	ft_sa(a, ptr);
	ft_sb(b, ptr);
	ft_putstr_fd("ss\n", 1);
}
/*
void	ft_pa(t_stack *ptr)
{

}
*/
void	ft_pb(t_stack *ptr)
{
	int	i;
	int	j;

	ptr->sizea--;
	i = 0;
	j = ptr->sizeb;
	ptr->sizeb++;
	while (j > 0)
	{
		ptr->b[j] = ptr->b[j - 1];
		j--;
	}
	ptr->b[j] = ptr->a[0];
	while (i < ptr->sizea)
	{
		ptr->a[i] = ptr->a[i + 1];
		i++;
	}
	ptr->a[i] = 0;
}