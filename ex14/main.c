/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:46:58 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/08 17:47:01 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_sqrt(int nb);

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Racine de %d = %d\n", atoi(av[1]), ft_sqrt(atoi(av[1])));
	}
	return (0);
}
