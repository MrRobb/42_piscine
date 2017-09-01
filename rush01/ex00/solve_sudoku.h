/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 15:04:14 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/20 19:36:33 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_SUDOKU_H

# define SOLVE_SUDOKU_H

# include "check_sudoku.h"

typedef struct	s_cell {
	int row;
	int column;
}				t_cell;

void			store_cell(int sudoku[9][9][10], int i, int j, int k);
void			store_candidates(int sudoku[9][9][10]);
t_cell			next_position(int sudoku[9][9][10], t_cell c);
int				backtracking(int sudoku[9][9][10], t_cell c);
int				solve_sudoku(int sudoku[9][9][10]);

#endif
