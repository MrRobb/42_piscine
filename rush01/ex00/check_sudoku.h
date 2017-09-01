/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sudoku.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 13:21:21 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/20 20:13:48 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_SUDOKU_H

# define CHECK_SUDOKU_H

int		check_cell(int s[9][9][10], int row, int column);
int		check_sudoku(int sudoku[9][9][10]);

#endif
