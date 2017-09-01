/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 13:43:36 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/17 23:28:19 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_concat_params(int argc, char **argv);
char	**ft_split_whitespaces(char const *str);
int		count_words(char *str);
void	ft_print_words_tables(char **tab);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void print_array_ints(int *v, int size) {
	if(!v) printf("NULL\n");
	else{
		for(int j = 0; j < size; j++) {
			printf("%d ", v[j]);
		 }
		 printf("\n");
	}
}

void print_array_strings(char **v) {
	if(!v) printf("NULL\n");
	else {
		for(int j = 0; v[j] != 0; j++) {
			printf("%s|", v[j]);
		 }
		 printf("\n");
	}
}

int main(int argc, char *argv[]) {
	// EX00
	printf("EX00\n");

	char *src00 = "Hello bro";
	char *my_dest00 = ft_strdup(src00);
	char *the_dest00 = strdup(src00);
	printf("%s\n", my_dest00);
	printf("%s\n", the_dest00);

	printf("\n");

	// EX01
	printf("EX01\n");

	int min01 = 6;
	int max01 = 11;
	int *v01 = ft_range(min01, max01);
	print_array_ints(v01, max01 - min01);

	printf("\n");

	// EX02
	printf("EX02\n");

	int min02 = 0;
	int max02 = 5;
	int *v02 = NULL;
	int n02 = ft_ultimate_range(&v02, min02, max02);
	printf("%d\n", n02);
	print_array_ints(v02, max02 - min02);

	printf("\n");

	// EX03
	printf("EX03\n");

	printf("%s", ft_concat_params(argc, argv));

	printf("\n");

	// EX04
	printf("EX04\n");

	char *s04 = " a	b\nc ";
	char **a04 = ft_split_whitespaces(s04);
	print_array_strings(a04);
	printf("DONE\n");

	// EX05
	ft_print_words_tables(a04);
	printf("%i\n", count_words(s04));
	printf("\n");

	// EX06
	printf("EX06\n");
	char *nbr06 = "-80000000";
	char *base_from06 = "0123456789ABCDEF";
	char *base_to06 = "0123456789";
	printf("%s\n", ft_convert_base(nbr06, base_from06, base_to06));
}
