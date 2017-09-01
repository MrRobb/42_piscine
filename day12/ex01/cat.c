/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 22:53:02 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/24 22:17:37 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include "funcs.h"

void	input(void)
{
	char buf[1];

	while (read(0, buf, sizeof(buf)))
	{
		write(1, buf, sizeof(buf));
	}
}

int		print_file(char const *name)
{
	int		fd;
	char	buf[1];

	fd = open(name, O_RDONLY);
	if (fd < 0)
		return (errno);
	while (read(fd, buf, sizeof(buf)) > 0)
	{
		write(1, buf, sizeof(buf));
	}
	close(fd);
	return (0);
}

int		treat_file(char const *name)
{
	int n;

	if (ft_strcmp(name, "-") == 0)
		input();
	else
	{
		n = print_file(name);
		if (n == 13)
			ft_puterr(name, "Permission denied");
		else if (n == 2)
			ft_puterr(name, "No such file or directory");
		else if (errno == 21)
			ft_puterr(name, "Is a directory");
	}
	return (0);
}

int		main(int argc, char const *argv[])
{
	if (argc <= 1)
		input();
	else
	{
		while (argc-- > 1)
		{
			treat_file(argv[argc]);
		}
	}
	return (0);
}
