/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 20:30:23 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/15 21:33:27 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int		istrlcat(char *dst, const char *src, unsigned int siz);

int main()
{
	char a[10] = "bro";
	char b[] = "Hello";
	unsigned int i = 8;
	printf("%u\n", ft_strlcat(a, b, i));
	printf("%s\n", a);
	printf("%s\n", b);
}
