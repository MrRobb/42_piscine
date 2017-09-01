/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 00:14:21 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/18 00:31:23 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (factory)
	{
		while (factory[i])
		{
			while (factory[i][j])
			{
				free(factory[i][j]);
				++j;
			}
			free(factory[i]);
			++i;
		}
		free(factory);
		++factory;
	}
}
