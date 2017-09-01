/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 12:28:53 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/26 21:56:50 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct	s_stack
{
	int			stk[1000000];
	int			top;
}				t_stack;

void			push(int x, t_stack *s);
int				pop(t_stack *s);
int				is_empty(t_stack *s);

#endif
