/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 22:20:52 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/22 23:58:12 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_nb_length(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_sort_medium(t_stack *ptr)
{
	int	i;
	int	n;

	i = 0;
	while (i < ptr->sizea - 1)
	{
		if (ft_nb_length(ptr->a[0]) > ft_nb_length(ptr->a[i + 1]))
			n = ft_nb_length(ptr->a[0]);
		else
			n = ft_nb_length(ptr->a[i + 1]);
		i++;
	}
	return (n);
}