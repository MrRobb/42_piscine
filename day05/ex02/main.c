/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 01:23:44 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/15 16:20:33 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int main(){
	char i[] = "0";
	int n = ft_atoi(&i[0]);
	int x = atoi(&i[0]);
	printf("ft_atoi: %d\n", n);
	printf("atoi   : %d\n", x);
}