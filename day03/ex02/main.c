/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:42:47 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/11 10:05:23 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

int main(){
	int i = 7;
	int j = 3;
	int *a = &i;
	int *b = &j;
	ft_swap(a, b);
	printf("\nValue of i should be 7 and it is : %u",*a);
	printf("\nValue of j should be 3 and it is : %u",*b);
}