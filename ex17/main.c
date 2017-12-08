/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:57:02 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/08 19:07:18 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("ft_strcmp : %d\n", ft_strcmp(av[1], av[2]));
		printf("strcmp : %d\n", strcmp(av[1], av[2]));
	}
	return (0);
}
