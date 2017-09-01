/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 23:58:47 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/18 00:12:11 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_button(int i, int j, int k)
{
	if (i == j)
		return (i);
	else if (j == k)
		return (j);
	else if (i == k)
		return (k);
	else if ((i < j && j < k) || (i > j && j > k))
		return (j);
	else if ((j < i && i < k) || (j > i && i > k))
		return (i);
	else
		return (k);
}
