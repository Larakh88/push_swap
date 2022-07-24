/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:01:40 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/24 20:11:52 by lel-khou         ###   ########.fr       */
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
	int		*sml;
	int		*a;
	int		*b;
	int		sizea;
	int		sizeb;
	int		n;
}	t_stack;

void	temp_init(t_stack *ptr, int argc, char **argv);
void	error_check(t_stack *ptr);
void	ft_check_dup(t_stack *ptr);
void	ft_check_limits(t_stack *ptr);
void	stack_init(t_stack *ptr);
int		check_sort(int *array, t_stack *ptr);
void	ft_sort_select(t_stack *ptr);
void	ft_merge(t_stack *ptr);
void	ft_sort_2(char *str, int *array, t_stack *ptr);
void	ft_sort_3(char *str, int *array, t_stack *ptr);
void	ft_sort_5(t_stack *ptr);
void	ft_sort_medium(t_stack *ptr);
void	ft_radix_a(t_stack *ptr, long int x);
void	ft_radix_b(t_stack *ptr, long int x);
void	ft_swap(char *str, int *array, t_stack *ptr);
void	ft_ss(t_stack *ptr);
void	ft_pa(t_stack *ptr);
void	ft_pb(t_stack *ptr);
void	ft_rotate(char *str, int *array, t_stack *ptr);
void	ft_rr(t_stack *ptr);
void	ft_rrotate(char *str, int *array, t_stack *ptr);
void	ft_rrr(t_stack *ptr);
void	ft_error(char *str, int i, t_stack *ptr);
void	free_temp(char **ptr);
void	ft_initialize(t_stack *ptr);
void	longest_digit(t_stack *ptr);
int		ft_nb_length(long int n);
int		abs_value(int n);
int		lowest_nb(int n, long int x);
int		ft_is_even(int n);
int		find_smallest(int *array, int size, int n);
void	small_array(t_stack *ptr);
void	copy_array(t_stack *ptr);

#endif
