/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:40:57 by lel-khou          #+#    #+#             */
/*   Updated: 2022/07/14 18:44:03 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;
	char	**a;
	//free temp at the end of the program

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			if (!temp)
			{
				temp = (char *)malloc(sizeof(char));
				temp[0] = 0;
			}
			temp = ft_strjoin(temp, argv[i]);
			temp = ft_strjoin(temp, " ");
			i++;
		}
		a = ft_split(temp, ' ');
		i = 0;
		//swap doesnt work with this. swaping 1 and 77 is giving 7 and 17
		if (a[6] > a[0])
			ft_swap(a[6], a[0]);
		while (a[i] != 0)
		{
			printf("%s\n", a[i]);
			i++;
		}
		//error_check(a, i);
	}
	else
		exit(1);
}