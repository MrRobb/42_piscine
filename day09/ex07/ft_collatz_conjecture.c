/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 08:55:37 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/18 09:21:42 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (1);
	else if (base % 2)
		return (1 + ft_collatz_conjecture(3 * base + 1));
	else
		return (1 + ft_collatz_conjecture(base / 2));
}
