/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:32:19 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/24 18:50:22 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	find_smallest(int *array, int size, int n)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (array[i] < n)
			count++;
		i++;
	}
	return (count);
}

void	small_array(t_stack *ptr)
{
	int	i;
	int	count;

	i = 0;
	ptr->sml = malloc(sizeof(int) * ptr->sizea);
	if (!ptr->sml)
		ft_error("Error: Malloc\n", 1, ptr);
	while (i < ptr->sizea)
	{
		count = find_smallest(ptr->a, ptr->sizea, ptr->a[i]);
		ptr->sml[i] = count;
		i++;
	}
}

void	copy_array(t_stack *ptr)
{
	int	i;

	i = 0;
	while (i < ptr->sizea)
	{
		ptr->a[i] = ptr->sml[i];
		i++;
	}
	free (ptr->sml);
}

void	ft_initialize(t_stack *ptr)
{
	ptr->sizea = 0;
	ptr->sizeb = 0;
	ptr->n = 0;
}
