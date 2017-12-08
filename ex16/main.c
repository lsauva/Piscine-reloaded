/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:45:51 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/08 18:51:51 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("ft_strlen : %d\n", ft_strlen(av[1]));
		printf("strlen : %lu\n", strlen(av[1]));
	}
	return (0);
}
