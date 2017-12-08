/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:11:57 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/08 14:21:35 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Facto %d = %d\n", atoi(av[1]),
				ft_iterative_factorial(atoi(av[1])));
	}
	return (0);
}
