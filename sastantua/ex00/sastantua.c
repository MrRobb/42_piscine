/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 00:26:47 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/13 21:23:32 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_s = 0;
int	g_sum;
int	g_extra_width;
int	g_step;
int	g_done_lines;
int g_width;
int g_height;
int g_i;
int g_r;
int g_space;
int g_t;

void	ft_putchar(char c);

int		lines(void)
{
	int height_pyramid;
	int size;

	size = g_s;
	height_pyramid = g_s;
	while (size-- > 0)
	{
		height_pyramid += size + 2;
	}
	return (height_pyramid);
}

int		offset(void)
{
	int max;
	int sum;
	int real;
	int i;

	max = 2;
	sum = !(g_s % 2);
	real = 0;
	i = 1;
	while (i++ < g_s / 2)
		++max;
	i = g_step;
	while (i++ < g_s)
	{
		real += max;
		if (sum)
		{
			max -= 1;
			sum = 0;
		}
		else
			sum = 1;
	}
	return (real);
}

int		zoid(int w, int h, int o, int l)
{
	g_r = 1;
	while (g_r <= h)
	{
		g_space = 0;
		while (g_space++ < l + o - g_r)
			ft_putchar(' ');
		ft_putchar('/');
		g_t = 0;
		while (g_t++ < (w + 2 * (g_r - 1)))
		{
			if (o == 0 && (l - g_r < h - 3 + g_s % 2) && (g_t > w / 2 + g_r
		- (g_s + g_s % 2) / 2) && g_t < w / 2 + g_r + (g_s + g_s % 2) / 2)
			{
				(l - g_r == (h - 3 + g_s % 2) / 2 &&
		g_s > 4 && g_t == w / 2 + g_r + (g_s + g_s % 2) / 2 - 2) ?
				ft_putchar('$') : ft_putchar('|');
			}
			else
				ft_putchar('*');
		}
		ft_putchar('\\');
		ft_putchar('\n');
		++g_r;
	}
	return (w + 2 * (h - 1));
}

void	sastantua(int size)
{
	g_width = 1;
	g_height = 3;
	g_step = 1;
	g_done_lines = 0;
	g_s = size;
	if (g_step > 0)
	{
		while (g_step <= g_s)
		{
			g_extra_width = 2;
			g_sum = 1;
			g_width = zoid(g_width, g_height, offset(), lines() - g_done_lines);
			g_i = 1;
			while (g_i++ <= g_step)
			{
				if (g_sum)
					g_extra_width++;
				g_sum = !g_sum;
			}
			g_width += g_extra_width * 2;
			g_done_lines += g_height;
			++g_height;
			++g_step;
		}
	}
}
