/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 14:37:51 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/18 14:57:14 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int i;
	int max;

	if (length > 0)
	{
		i = 0;
		max = tab[i];
		while (i < length)
		{
			if (tab[i] > max)
				max = tab[i];
			++i;
		}
		return (max);
	}
	else
		return (0);
}
