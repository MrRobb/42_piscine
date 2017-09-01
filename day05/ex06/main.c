/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:38:55 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/14 17:14:54 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char a[100];
	char b[100];
	strcpy(a, "A0z");
	strcpy(b, "A02");
	printf("Result %i\n", ft_strcmp(a,b));
	printf("Correction %i\n", strcmp(a,b));
}