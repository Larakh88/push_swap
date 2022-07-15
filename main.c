/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:40:57 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/15 14:38:58 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*ptr;

	i = 0;
	if (argc < 2)
		exit(1);
	ptr = malloc(sizeof(t_stack));
	if (!ptr)
		ft_error("Error: malloc\n", 1, ptr);
	if (argc == 2)
	{
		error_check(argv[1], ptr);
	//	ptr->a = ft_split(argv[1], ' ');
	}
	if (argc > 2)
	{
		while (i < argc - 1)
		{
			ptr->a[i] = ft_atoi(argv[i + 1]);
			i++;
		}
		printf("%d\n", ptr->a[0]);
		printf("%d\n", ptr->a[1]);
		printf("%d\n", ptr->a[2]);
		printf("%d\n", ptr->a[3]);
	}
}