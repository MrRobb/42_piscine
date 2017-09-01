/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 18:19:07 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/27 22:45:51 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rushes.h"

int	main(void)
{
	char	c;
	char	*str;
	int		i;
	int		buf_size;

	g_height = 0;
	g_width = 0;
	str = malloc(sizeof(char*));
	i = 0;
	buf_size = 8;
	while ((read(0, &c, 1)))
	{
		str[i++] = c;
		if (i >= buf_size)
		{
			buf_size *= 2;
			str = ft_realloc(str, buf_size);
		}
	}
	measure(str);
	check(str);
	print_result();
}
