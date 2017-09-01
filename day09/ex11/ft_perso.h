/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 12:10:05 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/18 12:59:09 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H

# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS "SAVE_AUSTIN_POWERS"

# include <string.h>

typedef struct	s_perso {
	char	*name;
	double	life;
	int		age;
	char	*profession;
}				t_perso;

#endif
