/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitset_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 23:25:01 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/30 23:25:02 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITSET_UTILS_H
# define BITSET_UTILS_H

# include "ft_bitset.h"

t_bitset			*bs_copy(t_bitset *set);
void				bs_and(t_bitset *set1, t_bitset *set2);
void				bs_shift(unsigned long **bits);
int					existence(t_bitset *set, int line);

#endif
