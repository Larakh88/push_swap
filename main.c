/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:40:57 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/18 12:41:31 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	temp_init(t_stack *ptr, int argc, char **argv)
{
	int	i;

	i = 0;
	ptr->temp = malloc(sizeof(char *) * argc);
	if (!ptr->temp)
		ft_error("Error: malloc\n", 1, ptr);
	while (i < argc - 1)
	{
		ptr->temp[i] = ft_strdup(argv[i + 1]);
		i++;
	}
	ptr->temp[i] = NULL;
}

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
	if (check_sort(ptr->a, ptr) == 0)
		ft_error("", 0, ptr);
	else
	{
		ft_pb(ptr);
		ft_pb(ptr);
		ft_pb(ptr);
		ft_ss(ptr);
	}
		//ft_sort_select(ptr);
	printf("a is\n%d\n", ptr->a[0]);
	printf("%d\n", ptr->a[1]);
	printf("%d\n", ptr->a[2]);
	printf("%d\n", ptr->a[3]);
	printf("%d\n", ptr->a[4]);
	printf("%d\n", ptr->a[5]);
	printf("sizea %d\n", ptr->sizea);
	printf("b is\n%d\n", ptr->b[0]);
	printf("%d\n", ptr->b[1]);
	printf("%d\n", ptr->b[2]);
	printf("%d\n", ptr->b[3]);
	printf("%d\n", ptr->b[4]);
	printf("%d\n", ptr->b[5]);
	printf("sizeb %d\n", ptr->sizeb);
}