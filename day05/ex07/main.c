/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:38:55 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/14 17:26:32 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char a[100];
	char b[100];
	strcpy(a, "A0234");
	strcpy(b, "A02232");
	printf("Result %i\n", ft_strncmp(a,b,5));
	printf("Correction %i\n", strncmp(a,b,5));
}