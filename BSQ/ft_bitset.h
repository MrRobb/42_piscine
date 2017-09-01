/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitset.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 23:25:11 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/30 23:25:11 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BITSET_H
# define FT_BITSET_H

# include <stdlib.h>
# include <unistd.h>

typedef unsigned long	t_bitset;
unsigned long			g_len;

t_bitset			*init_first_line(int fd);
t_bitset			*init_bitset(int fd, int line);
t_bitset			*init_bitset_from_str(char *str);

#endif
