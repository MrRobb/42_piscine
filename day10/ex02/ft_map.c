/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:25:12 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/21 17:42:45 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *results;
	int i;

	i = 0;
	results = (int *)malloc(length * sizeof(int));
	while (i < length)
	{
		results[i] = (*f)(tab[i]);
		++i;
	}
	return (results);
}
