/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 22:48:04 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/26 23:43:15 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include "stack.h"

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		is_whitespace(char c);
int		ft_atoi(char *str);
int		eval_expr(char *str);
int		digits(int num);

void	case_operand(char *str, t_stack *g_num, int *num_len);
void	case_operator(t_stack *g_op, void (*do_op)(char c),
	int (*precedence)(char c1, char c2), char c);
void	case_closing_parenthesis(t_stack *g_op, void (*do_op)(char c));

#endif
