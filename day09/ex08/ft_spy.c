/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 09:23:04 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/18 10:26:48 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (0);
}

int main(int argc, char const *argv[])
{
	int alert;

	alert = 0;
	while (argc > 1 && !alert)
	{
		printf("Skipping\n");

		printf("Compare\n");
		if (ft_strcmp(argv[argc - 1], "president") == 0 ||
			ft_strcmp(argv[argc - 1], "attack") == 0 ||
			ft_strcmp(argv[argc - 1], "Powers") == 0)
			alert = 1;
		--argc;
	}
	if (alert)
		write(1, "Alert!!!", 7);
	return 0;
}
