/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:02:05 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/16 15:59:32 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	stack_init(t_stack *ptr)
{
	int	i;

	i = 0;
	while (ptr->temp[i] != 0)
		i++;
	ptr->sizea = i;
	ptr->a = malloc(sizeof(int) * i);
	ptr->b = ft_calloc(i, sizeof(int));
	if (!ptr->a || !ptr->b)
		ft_error("Error: Malloc\n", 1, ptr);
	while (--i >= 0)
		ptr->a[i] = ft_atoi(ptr->temp[i]);
}

int	check_sort(int *array, t_stack *ptr)
{
	int	i;

	i = 0;
	while (i < ptr->sizea - 1)
	{
		if (array[i] < array[i + 1])
			i++;
		else
			return (1);
	}
	return (0);
}