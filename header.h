/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:01:40 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/16 15:59:31 by lel-khou         ###   ########.fr       */
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
	int		sizea;
	int		sizeb;
}	t_stack;

void	temp_init(t_stack *ptr, int argc, char **argv);
void	error_check(t_stack *ptr);
void	ft_check_dup(t_stack *ptr);
void	ft_check_limits(t_stack *ptr);
void	stack_init(t_stack *ptr);
int		check_sort(int *array, t_stack *ptr);
void	ft_sort_select(t_stack *ptr);
void	ft_sort_2(t_stack *ptr);
void	ft_sort_3(t_stack *ptr);
void	ft_sa(int *a, t_stack *ptr);
void	ft_sb(int *b, t_stack *ptr);
void	ft_ss(int *a, int *b, t_stack *ptr);
void	ft_pa(t_stack *ptr);
void	ft_pb(t_stack *ptr);
void	ft_ra(t_stack *ptr);
void	ft_rb(t_stack *ptr);
void	ft_rr(t_stack *ptr);
void	ft_rra(t_stack *ptr);
void	ft_rrb(t_stack *ptr);
void	ft_error(char *str, int i, t_stack *ptr);
void	ft_swap(char *a, char *b);

#endif
