/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 21:43:21 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/15 23:09:08 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int size_backup;

	i = 0;
	j = 0;
	size_backup = size;
	while (size > 1 && (dest[i] = src[i]) != 0)
	{
		dest[i] = src[i];
		--size;
		++i;
	}
	if (size_backup != 0)
	{
		dest[i] = '\0';
		while (src[j])
			++j;
	}
	return (j);
}
