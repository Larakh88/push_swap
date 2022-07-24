/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:25:35 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/24 17:04:53 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	longest_digit(t_stack *ptr)
{
	int	i;

	i = 1;
	ptr->n = ft_nb_length(ptr->a[0]);
	while (i < ptr->sizea)
	{
		if (ft_nb_length(ptr->a[i]) > ptr->n)
			ptr->n = ft_nb_length(ptr->a[i]);
		i++;
	}
}

int	ft_nb_length(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	abs_value(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}

int	lowest_nb(int n, long int x)
{
	if ((ft_nb_length(n) + 1) < ft_nb_length(x))
		return (0);
	while (n >= 10)
		n = n / 10;
	return (n);
}

int	ft_is_even(int n)
{
	if (n % 2 != 0)
		return (1);
	return (0);
}
