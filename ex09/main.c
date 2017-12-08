/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:39:42 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/13 14:48:06 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ft(int *nbr);

int		main(int ac, char **av)
{
	int i;

	if (ac == 2)
	{
		i = atoi(av[1]);
		printf("Before : i = %d\n", i);
		ft_ft(&i);
		printf("After : i = %d\n", i);
	}
	return (0);
}
