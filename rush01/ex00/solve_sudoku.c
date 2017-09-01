/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 15:04:18 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/20 21:26:56 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve_sudoku.h"

void	store_cell(int sudoku[9][9][10], int i, int j, int k)
{
	if (sudoku[i][k][0] != 0)
		sudoku[i][j][sudoku[i][k][0]] = 1;
	if (sudoku[k][j][0] != 0)
		sudoku[i][j][sudoku[k][j][0]] = 1;
	if (sudoku[i - i % 3 + i / 3][j / 3 * 3 + i % 3][0])
		sudoku[i][j][sudoku[i - i % 3 + i / 3][j / 3 * 3 + i % 3][0]] = 1;
}

void	store_candidates(int sudoku[9][9][10])
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			k = 0;
			if (sudoku[i][j][0] == 0)
			{
				while (k < 9)
				{
					store_cell(sudoku, i, j, k);
					++k;
				}
			}
			++j;
		}
		++i;
	}
}

t_cell	next_position(int sudoku[9][9][10], t_cell c)
{
	t_cell d;

	d.row = c.row;
	d.column = c.column + 1;
	while (d.row < 9)
	{
		d.column = 0;
		while (d.column < 9)
		{
			if (sudoku[d.row][d.column][0] == 0)
			{
				return (d);
			}
			d.column++;
		}
		d.row++;
	}
	return (d);
}

int		backtracking(int sudoku[9][9][10], t_cell c)
{
	int k;

	if (c.row >= 9 && c.column >= 9)
		return (1);
	k = 0;
	if (sudoku[c.row][c.column][0] == 0)
	{
		while (k < 9)
		{
			if (sudoku[c.row][c.column][k + 1] != 1)
			{
				sudoku[c.row][c.column][0] = k + 1;
				if (check_cell(sudoku, c.row, c.column))
				{
					if (backtracking(sudoku, next_position(sudoku, c)))
						return (1);
				}
				sudoku[c.row][c.column][0] = 0;
			}
			++k;
		}
	}
	return (0);
}

int		solve_sudoku(int sudoku[9][9][10])
{
	t_cell c;

	c.row = 0;
	c.column = 0;
	store_candidates(sudoku);
	return (backtracking(sudoku, next_position(sudoku, c)));
}
