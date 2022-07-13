/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:40:57 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/13 14:07:43 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int	i;
	int	*a;

	i = 0;
	if (argc >= 2)
	{
		a = malloc(sizeof(int) * (argc - 1));
		while (i < argc - 1)
		{
			a[i] = atoi(argv[i + 1]);
			i++;
		}
	}
	else
		exit(1);
}