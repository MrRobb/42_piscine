/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_advanced.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 18:33:51 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/22 01:09:23 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "opp2.h"
#include "ft_opp.h"

void	(*parse(char *op))(int, int)
{
	int i;

	i = 0;
	while (g_opptab[i].s[0] != '\0')
	{
		if (ft_strcmp(g_opptab[i].s, op) == 0)
			return (g_opptab[i].f);
		++i;
	}
	return (g_opptab[i].f);
}

void	ft_usage(int a, int b)
{
	int n;
	int i;

	n = a + b;
	i = 0;
	ft_putstr("error : only [ ");
	while (g_opptab[i].s[0] != '\0')
	{
		ft_putstr(g_opptab[i].s);
		ft_putchar(' ');
		++i;
	}
	ft_putstr("] are accepted.");
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
