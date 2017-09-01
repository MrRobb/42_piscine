/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 23:09:30 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/12 23:41:44 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	t[8] = {-1};
int	sol = 1;

int		abs(int a){
	if(a < 0) return a*-1;
	else return a;
}

int		empty(int i)
{
	int j = 0;
	while((t[i] != t[j]) && (abs(t[i] - t[j]) != (i-j)) && j < 8)
		j++;
	return i == j ? 1 : 0;
}



void	queens(int i, int *a)
{
	t[i] = 0;
	while(t[i] < 8)
	{
		if(empty(i))
		{
			if(i==7)
			{
				(*a)++;
				++sol;
			}
			else
			queens(i+1, a);
		}
		t[i]++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	int i = 0;
	queens(0, &i);
	return i;
}