/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:47:57 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/11 14:19:15 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c){
	write(1, &c, 1);
	return (0);
}


void ft_putstr(char *str);

int main(){
	char i[] = "Hello654";
	char *a;
	a = i;

	ft_putstr(a);
}