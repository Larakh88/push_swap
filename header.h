/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:01:40 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/15 22:58:15 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	char	**temp;
	int		*a;
	int		*b;
}	t_stack;

void	error_check(t_stack *ptr);
void	ft_check_dup(t_stack *ptr);
void	ft_check_limits(t_stack *ptr);
void	ft_error(char *str, int i, t_stack *ptr);
void	ft_swap(char *a, char *b);

#endif
