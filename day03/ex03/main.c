/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:47:57 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/11 00:37:13 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(){
	int i = 0;
	int j = 0;
	int *a = &i;
	int *b = &j;

	ft_div_mod(3, 0, a, b);
	
	printf("\nValue of i is : %d",*a);
	printf("\nValue of j is : %d",*b);
}