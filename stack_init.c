/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:02:05 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/24 17:04:47 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	temp_init(t_stack *ptr, int argc, char **argv)
{
	int	i;

	i = 0;
	ptr->temp = malloc(sizeof(char *) * argc);
	if (!ptr->temp)
		ft_error("Error: malloc\n", 1, ptr);
	while (i < argc - 1)
	{
		ptr->temp[i] = ft_strdup(argv[i + 1]);
		i++;
	}
	ptr->temp[i] = NULL;
}

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
	int	j;

	i = 0;
	if (array == ptr->a)
		j = ptr->sizea;
	else
		j = ptr->sizeb;
	if (j == 1)
		return (0);
	while (i < j - 1)
	{
		if (array[i] < array[i + 1])
			i++;
		else
			return (1);
	}
	return (0);
}
