/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 18:33:51 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/21 21:30:36 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_opp.h"

void	(*parse(char *op))(int, int)
{
	if (!ft_strcmp(op, "+"))
		return (&ft_add);
	else if (!ft_strcmp(op, "-"))
		return (&ft_sub);
	else if (!ft_strcmp(op, "*"))
		return (&ft_mul);
	else if (!ft_strcmp(op, "/"))
		return (&ft_div);
	else if (!ft_strcmp(op, "%"))
		return (&ft_mod);
	else
		return (0);
}

int		main(int argc, char *argv[])
{
	int		a;
	int		b;
	void	(*fun)(int, int);

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		fun = parse(argv[2]);
		b = ft_atoi(argv[3]);
		if (fun)
			fun(a, b);
		else
			ft_putnbr(0);
		ft_putchar('\n');
	}
	return (0);
}
