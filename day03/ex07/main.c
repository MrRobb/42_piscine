/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 01:23:44 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/11 14:44:11 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1,&c,1);
}

char *ft_strrev(char *str);

int main(){
	char i[] = "brom";
	char *a;
	a = i;

	a = ft_strrev(a);

	for(int i = 0; i < 4; ++i){
		print(a[i]);
	}
}