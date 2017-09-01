/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftio.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 13:09:09 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/20 19:44:47 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTIO_H

# define FTIO_H

# include <unistd.h>

void	ft_putchar(char c);
void	print_error(void);
int		store_sudoku(int sudoku[9][9][10], char const *argv[]);
void	print_sudoku(int const sudoku[9][9][10]);

#endif
