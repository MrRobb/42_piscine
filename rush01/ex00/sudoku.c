/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 19:57:30 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/20 21:36:25 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

#include <stdio.h>
#include <time.h>

int		main(int argc, char const *argv[])
{
	if (argc == 10)
	{
		if (store_sudoku(g_sudoku, argv))
		{
			if (check_sudoku(g_sudoku))
			{
				if (solve_sudoku(g_sudoku))
					print_sudoku(g_sudoku);
				else
					print_error();
			}
			else
				print_error();
		}
		else
			print_error();
	}
	else
		print_error();
	return (0);
}
