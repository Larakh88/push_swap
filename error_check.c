/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:34:23 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/24 20:11:54 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	error_check(t_stack *ptr)
{
	int	i;
	int	j;

	i = 0;
	while (ptr->temp[i] != 0)
	{
		j = 0;
		while (ptr->temp[i][j] != 0)
		{
			if (((ptr->temp[i][j] == '-' || ptr->temp[i][j] == '+') && \
			ft_isdigit(ptr->temp[i][j + 1]) == 1) || \
			ft_isdigit(ptr->temp[i][j]) == 1)
				j++;
			else
				ft_error("Error\n", 1, ptr);
		}
		i++;
	}
	ft_check_dup(ptr);
	ft_check_limits(ptr);
}

void	ft_check_dup(t_stack *ptr)
{
	int		i;
	int		j;
	size_t	k;

	i = 0;
	while (ptr->temp[i] != 0)
	{
		j = i + 1;
		while (ptr->temp[j] != 0)
		{
			if (ft_strlen(ptr->temp[i]) > ft_strlen(ptr->temp[j]))
				k = ft_strlen(ptr->temp[i]);
			else
				k = ft_strlen(ptr->temp[j]);
			if (ft_strncmp(ptr->temp[i], ptr->temp[j], k) != 0)
				j++;
			else
				ft_error("Error\n", 1, ptr);
		}
		i++;
	}
}

void	ft_check_limits(t_stack *ptr)
{
	int	nb;
	int	i;

	i = 0;
	while (ptr->temp[i] != 0)
	{
		nb = ft_atoi(ptr->temp[i]);
		if (((nb == 0 || nb == -1) && ft_strlen(ptr->temp[i]) >= 9) \
		|| ft_strlen(ptr->temp[i]) > 12)
			ft_error("Error\n", 1, ptr);
		i++;
	}
}

void	ft_error(char *str, int i, t_stack *ptr)
{
	if (i == 1)
		free_temp(ptr->temp);
	if (ptr->a)
		free(ptr->a);
	if (ptr->b)
		free(ptr->b);
	if (ptr)
		free(ptr);
	ft_putstr_fd(str, 2);
	exit(i);
}

void	free_temp(char **ptr)
{
	int	i;

	i = 0;
	if (ptr)
	{
		while (ptr[i] != 0)
		{
			free(ptr[i]);
			i++;
		}
		free (ptr);
	}
}
