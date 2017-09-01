/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 16:30:19 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/17 17:42:01 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*s;
	char	*backup;
	int		i;
	int		j;

	s = NULL;
	backup = NULL;
	if (argc > 0)
	{
		s = malloc(sizeof(argv));
		backup = s;
		i = 1;
		while (i < argc)
		{
			j = 0;
			if (i != 1)
				*s++ = '\n';
			while (argv[i][j] != '\0')
				*s++ = argv[i][j++];
			++i;
		}
		*s = '\0';
	}
	return (backup);
}
