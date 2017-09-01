/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 13:17:07 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/17 15:13:06 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02/ft_boolean.h"
#include "ex03/ft_abs.h"
#include <stdio.h>

void ft_putstr(char *str)
{
	while (*str)
	write(1, str++, 1);
}

t_bool ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);

	int absx = -9;
	printf("%d => %d\n", absx , ABS(absx));
	return (SUCCESS);
}
