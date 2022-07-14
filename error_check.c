/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:34:23 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/14 14:17:08 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	error_check(char *a, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (ft_isalpha(a[j]) == 1)
		{
			ft_error("Error: Non Numerical Argument", 1, a);
			break ;
		}
		j++;
	}
}

void	ft_error(char *str, int i, char *a)
{
	free (a);
	ft_putstr_fd(str, 1);
	exit(i);
}