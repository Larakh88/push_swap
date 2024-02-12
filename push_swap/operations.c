/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:19:01 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/24 20:45:29 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_swap(char *str, int *array, t_stack *ptr)
{
	int	temp;
	int	j;

	if (array == ptr->a)
		j = ptr->sizea;
	else
		j = ptr->sizeb;
	if (j > 1)
	{
		temp = array[0];
		array[0] = array[1];
		array[1] = temp;
	}
	ft_putstr_fd("s", 1);
	ft_putstr_fd(str, 1);
}

void	ft_ss(t_stack *ptr)
{
	ft_swap("", ptr->a, ptr);
	ft_swap("", ptr->b, ptr);
	ft_putstr_fd("s\n", 1);
}

void	ft_pa(t_stack *ptr)
{
	int	i;
	int	j;

	ptr->sizeb--;
	i = 0;
	j = ptr->sizea;
	ptr->sizea++;
	while (j > 0)
	{
		ptr->a[j] = ptr->a[j - 1];
		j--;
	}
	ptr->a[j] = ptr->b[0];
	while (i < ptr->sizeb)
	{
		ptr->b[i] = ptr->b[i + 1];
		i++;
	}
	ptr->b[i] = 0;
	ft_putstr_fd("pa\n", 1);
}

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
	ft_putstr_fd("pb\n", 1);
}
