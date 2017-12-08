/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:26:32 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/09 15:35:40 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("ft_strdup : %s\n", ft_strdup(av[1]));
		printf("strdup : %s\n", strdup(av[1]));
	}
	return (0);
}
