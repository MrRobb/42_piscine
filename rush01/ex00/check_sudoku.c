/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 13:21:21 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/20 21:23:48 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_sudoku.h"

int		check_cell(int s[9][9][10], int row, int column)
{
	int i;
	int x;
	int y;

	i = 0;
	while (i < 9)
	{
		x = (row - row % 3 + i / 3);
		y = (column / 3 * 3 + i % 3);
		if (i != column && s[row][i][0] == s[row][column][0])
			return (0);
		if (i != row && s[i][column][0] == s[row][column][0])
			return (0);
		if ((x != row || y != column) && s[x][y][0] == s[row][column][0])
			return (0);
		++i;
	}
	return (1);
}

int		check_sudoku(int sudoku[9][9][10])
{
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (sudoku[i][j][0] != 0)
				++k;
			++j;
		}
		++i;
	}
	return (k >= 17);
}
