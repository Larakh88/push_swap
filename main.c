/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:40:57 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/14 14:17:05 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	/*int	i;
	char	*a;

	i = -1;
	if (argc >= 2)
	{
		a = malloc(sizeof(char) * argc);
		while (++i < argc - 1)
			a[i] = *argv[i + 1];
		a[i] = '\0';
		printf("%c\n", a[0]);
		printf("%c\n", a[1]);
		printf("%c\n", a[2]);
		error_check(a, i);
	}
	else
		exit(1);*/
	(void) argc;
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	printf("%s\n", argv[3]);
	printf("%s\n", argv[4]);
}