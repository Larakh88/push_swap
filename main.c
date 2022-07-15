/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:40:57 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/15 23:44:20 by lel-khou         ###   ########.fr       */
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
		ptr->temp = ft_split(argv[1], ' ');
	if (argc > 2)
	{
		ptr->temp = malloc(sizeof(char *) * argc);
		while (i < argc - 1)
		{
			ptr->temp[i] = ft_strdup(argv[i + 1]);
			i++;
		}
		ptr->temp[i] = NULL;
	}
	error_check(ptr);
}