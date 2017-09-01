/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 12:33:01 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/26 20:13:38 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	push(int x, t_stack *s)
{
	s->top = s->top + 1;
	s->stk[s->top] = x;
}

int		pop(t_stack *s)
{
	int num;

	if (s->top == -1)
		return (0);
	else
	{
		num = s->stk[s->top];
		s->top = s->top - 1;
		return (num);
	}
}

int		is_empty(t_stack *s)
{
	return (s->top == -1);
}
