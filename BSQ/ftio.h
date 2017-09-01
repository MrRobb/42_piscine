/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftio.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 23:25:13 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/30 23:33:16 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTIO_H
# define FTIO_H

void	ft_putchar(char c, int fd);
int		print_error(void);
int		check_error(t_bitset **map);
void	add_full_chars(void);
void	input(t_bitset ***map);

#endif
