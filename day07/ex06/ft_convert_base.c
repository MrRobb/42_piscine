/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:32:22 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/17 23:26:23 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int g_len_from = 0;
int g_len_to = 0;
int g_neg;

int		len(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (-1);
			++j;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] < 32)
			return (-1);
		++i;
	}
	i = 0;
	while (base[i] != '\0')
		++i;
	return (i);
}

int		base_to_int(char *nbr, char *base_from)
{
	int i;
	int j;
	int result;

	i = 0;
	result = 0;
	while (nbr[i] != '\0')
	{
		j = 0;
		while (base_from[j] != nbr[i])
			++j;
		result = g_neg ? (result * g_len_from) - j : (result * g_len_from) + j;
		++i;
	}
	return (result);
}

int		i_base(int nbr, char *base_to, int i, char **str)
{
	if (g_neg ? nbr > (-g_len_to) : nbr < g_len_to)
	{
		(*str)[i] = (char)malloc(sizeof(char));
		(*str)[i] = g_neg ? base_to[(nbr % g_len_to) * -1] :
		base_to[nbr % g_len_to];
		return (i + 1);
	}
	else
	{
		i = i_base(nbr / g_len_to, base_to, i, str);
		(*str)[i] = (char)malloc(sizeof(char));
		(*str)[i] = g_neg ? base_to[(nbr % g_len_to) * -1] :
		base_to[nbr % g_len_to];
		return (i + 1);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	char	*str;
	int		i;

	g_len_from = len(base_from);
	g_len_to = len(base_to);
	g_neg = 0;
	if (nbr[0] != '\0' && (nbr[0] == '-' || nbr[0] == '+'))
	{
		if (nbr[0] == '-')
			g_neg = 1;
		++nbr;
	}
	n = base_to_int(nbr, base_from);
	str = (char *)malloc(sizeof(char *));
	i = i_base(n, base_to, g_neg, &str);
	if (g_neg)
		str[0] = '-';
	str[i] = '\0';
	return (str);
}
