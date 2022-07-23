/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:25:35 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/23 21:39:03 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_nb_length(long int n)
{
	int	i;

	i = 0;
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