/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 12:09:30 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/23 19:08:10 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *node;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		node = ft_create_elem(data);
		(*node).next = (*begin_list);
		*begin_list = node;
	}
}
