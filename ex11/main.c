/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:54:44 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/13 14:56:31 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(int ac, char **av)
{
	int div;
	int mod;

	if (ac == 5)
	{
		div = 0;
		mod = 0;
		ft_div_mod(atoi(av[1]), atoi(av[2]), &div, &mod);
		printf("div: %d", div);
		printf("\n");
		printf("mod: %d", mod);
		printf("\n");

	}
	return (0);
}
