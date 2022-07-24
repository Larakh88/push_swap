/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:19:01 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/24 20:11:51 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_rotate(char *str, int *array, t_stack *ptr)
{
	int		temp;
	int		i;
	int		j;

	i = 0;
	temp = array[0];
	if (array == ptr->a)
		j = ptr->sizea;
	else
		j = ptr->sizeb;
	while (i < j)
	{
		array[i] = array[i + 1];
		i++;
	}
	array[i - 1] = temp;
	ft_putstr_fd("r", 1);
	ft_putstr_fd(str, 1);
}

void	ft_rr(t_stack *ptr)
{
	ft_rotate("", ptr->a, ptr);
	ft_rotate("", ptr->b, ptr);
	ft_putstr_fd("\n", 1);
}

void	ft_rrotate(char *str, int *array, t_stack *ptr)
{
	int	temp;
	int	i;
	int	j;

	if (array == ptr->a)
		j = ptr->sizea;
	else
		j = ptr->sizeb;
	i = j - 1;
	temp = array[i];
	while (i > 0)
	{
		array[i] = array[i - 1];
		i--;
	}
	array[i] = temp;
	ft_putstr_fd("r", 1);
	ft_putstr_fd(str, 1);
}

void	ft_rrr(t_stack *ptr)
{
	ft_rrotate("r", ptr->a, ptr);
	ft_rrotate("", ptr->b, ptr);
	ft_putstr_fd("\n", 1);
}
