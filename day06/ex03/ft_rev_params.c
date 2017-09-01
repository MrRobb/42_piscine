/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:43:39 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/16 13:11:28 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char const *argv[])
{
	int i;
	int j;

	if (argc > 1)
	{
		i = argc - 1;
		while (i >= 1)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				++j;
			}
			ft_putchar('\n');
			--i;
		}
	}
	return (0);
}
