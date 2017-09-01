/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 22:19:45 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/17 22:29:23 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

void print_array_strings(char **v) {
	if(!v) printf("NULL\n");
	else {
		for(int j = 0; v[j] != 0; j++) {
			printf("%s|", v[j]);
		 }
		 printf("\n");
	}
}

int main()
{
	char *str = "Hi.hidadae dead daed , huidhaued";
	char **test = ft_split(str, ".,");
	print_array_strings(test);
}
