/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:40:57 by lel-khou          #+#    #+#             */
/*   Updated: 2024/02/12 18:23:10 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	t_stack	*ptr;
	char	**split;

	if (argc < 2)
		exit(1);
	ptr = (t_stack *)malloc(sizeof(t_stack));
	if (!ptr)
		return (0);
	if (argc == 2)
	{
		split = ft_split(argv[1], ' ');
		temp_init1(ptr, ft_count(argv[1], ' ') + 1, split);
	}
	if (argc > 2)
		temp_init(ptr, argc, argv);
	if (!ptr->temp)
		ft_error("Error: malloc\n", 1, ptr);
	error_check(ptr);
	ft_initialize(ptr);
	stack_init(ptr);
	free_temp(ptr->temp);
	if (check_sort(ptr->a, ptr) == 0)
		ft_error("", 0, ptr);
	ft_sort_select(ptr);
}
