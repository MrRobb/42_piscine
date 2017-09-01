/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushes.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gofernan <gofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 18:22:56 by gofernan          #+#    #+#             */
/*   Updated: 2017/08/27 19:51:08 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSHES_H
# define RUSHES_H

# include <stdlib.h>
# include <unistd.h>

int		check_first(char first, char middle, char last, char *str);
int		check_last(char first, char middle, char last, char *str);
int		check_vertical(char middle, char *str);
void	measure(char *str);
void	check(char *input);
void	print_result();
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	*ft_memcpy(void *dst, const void *src, unsigned int size);
char	*ft_realloc(char *ptr, unsigned int size);
void	print_result(void);

int g_height;
int g_width;
int g_rushes[5];

#endif
