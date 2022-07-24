/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:40:57 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/24 19:28:30 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	t_stack	*ptr;

	if (argc < 2)
		exit(1);
	ptr = malloc(sizeof(t_stack));
	if (!ptr)
		ft_error("Error: malloc\n", 1, ptr);
	if (argc == 2)
		ptr->temp = ft_split(argv[1], ' ');
	if (argc > 2)
		temp_init(ptr, argc, argv);
	if (!ptr->temp)
		ft_error("Error: malloc\n", 1, ptr);
	error_check(ptr);
	stack_init(ptr);
	free_temp(ptr->temp);
	ft_initialize(ptr);
	if (check_sort(ptr->a, ptr) == 0)
		ft_error("", 0, ptr);
	ft_sort_select(ptr);
}
