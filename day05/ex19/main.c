/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 22:16:23 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/15 22:35:48 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char a[10] = "hi";
	char b[] = "Hello";
	unsigned int i = 8;
	printf("%u\n", ft_strlcpy(a, b, i));
	printf("%s\n", a);
	printf("%s\n", b);
}