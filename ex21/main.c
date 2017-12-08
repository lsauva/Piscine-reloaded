/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:34:44 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/09 16:45:16 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

void	afficher_tab(int *tab, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		printf("%d : %d\n", i, tab[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int *var;

	if (ac != 3)
		return (0);
	var = ft_range(atoi(av[1]), atoi(av[2]));
	afficher_tab(var, atoi(av[2]) - atoi(av[1]));
	free((void*)var);
	return (0);
}
