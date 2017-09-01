/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:53:21 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/11 16:08:39 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_integer_table(int *tab, int size);

int main(){
	int a[] = {3,6,8,7,5,1,2,3,4,4,4};

	ft_sort_integer_table(a, 11);

	unsigned long i;
	for (i=0;i < (sizeof (a) /sizeof (a[0]));i++) {
    	printf("%d ",a[i]);
	}
}