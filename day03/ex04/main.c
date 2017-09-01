/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:47:57 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/11 00:59:49 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(){
	int i = -10;
	int j = 3;
	int *a = &i;
	int *b = &j;

	ft_ultimate_div_mod(a, b);
	
	printf("\nValue of i is : %d",*a);
	printf("\nValue of j is : %d",*b);
}