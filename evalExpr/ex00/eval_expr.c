/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 22:56:39 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/27 23:09:48 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "ft.h"

t_stack g_op;
t_stack g_num;

int		is_operator(char c)
{
	return (c == '+' || c == '-' || c == '/' || c == '*' || c == '%');
}

int		precedence(char c1, char c2)
{
	int p1;
	int p2;

	p1 = -1;
	p2 = -1;
	if (c1 == '+' || c1 == '-')
		p1 = 0;
	if (c1 == '*' || c1 == '/' || c1 == '%')
		p1 = 1;
	if (c2 == '+' || c2 == '-')
		p2 = 0;
	if (c2 == '*' || c2 == '/' || c2 == '%')
		p2 = 1;
	return (p1 >= p2);
}

void	do_op(char op)
{
	int operator;
	int num1;
	int num2;
	int result;

	operator = '+';
	if (op == '.')
		operator = pop(&g_op);
	num2 = pop(&g_num);
	num1 = pop(&g_num);
	result = 0;
	if (operator == '+')
		result = num1 + num2;
	if (operator == '-')
		result = num1 - num2;
	if (operator == '/')
		result = num1 / num2;
	if (operator == '*')
		result = num1 * num2;
	if (operator == '%')
		result = num1 % num2;
	push(result, &g_num);
}

int		eval_expr(char *str)
{
	int i;
	int num_len;

	g_op.top = -1;
	g_num.top = -1;
	i = 0;
	while (str[i] != '\0')
	{
		num_len = 0;
		if ((ft_atoi(&str[i]) != 0) || str[i] == '0')
			case_operand(&str[i], &g_num, &num_len);
		else if (str[i] == '(')
			push(str[i], &g_op);
		else if (str[i] == ')')
			case_closing_parenthesis(&g_op, &do_op);
		else if (is_operator(str[i]))
			case_operator(&g_op, &do_op, &precedence, str[i]);
		i += 1 + num_len;
	}
	while (!is_empty(&g_op))
		do_op('.');
	while (g_num.top > 0)
		do_op('+');
	return (!is_empty(&g_num)) ? (g_num.stk[g_num.top]) : 0;
}
