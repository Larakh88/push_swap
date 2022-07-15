/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:34:23 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/15 14:25:55 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	error_check(char *str, t_stack *ptr)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (((str[i] == '-' || str[i] == '+') && ft_isdigit(str[i + 1]) == 1) \
		|| ft_isdigit(str[i]) == 1 || (str[i] == ' '))
			i++;
		else
			ft_error("Error: Non Numerical Argument!\n", 1, ptr);
	}	
}


void	ft_error(char *str, int i, t_stack *ptr)
{
	free (ptr->a);
	free (ptr);
	ft_putstr_fd(str, 1);
	exit(i);
}