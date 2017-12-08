/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:15:18 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/08 16:20:38 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("recursive Facto %d = %d\n", atoi(av[1]),
				ft_recursive_factorial(atoi(av[1])));
	}
	return (0);
}
