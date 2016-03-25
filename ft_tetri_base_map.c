/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri_base_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 13:15:35 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/21 18:13:48 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_rm_tetri(char *map, int r, char a)
{
	int	x = 0;
	while (x < r)
	{
		if (map[x] == a)
		{
			map[x] = '.';
		}
		x++;
	}
}

int				ft_tetri_base_map(char *map, int nbt, int r, int a)
{
	char	*alpha;
	int		i;
	int		map_size;
	int		completed;
	int		o_r;

	o_r = r;
	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	map_size = 8000;
	while (map[map_size] != '\n')
		map_size--;
	i = 0;
	while (map[i] != alpha[a])
		i++;
	completed = 0;
	while (completed < 4)
	{
		if (r >= map_size)
		{
			ft_rm_tetri(map, r, alpha[a]);
			return (a + 1 < nbt ? ft_tetri_base_map(map, nbt, 0, ++a) : -1);
		}
		else if (map[i] == alpha[a])
		{
			if (map[r] == '.')
			{
				map[r] = map[i];
				completed++;
			}
			else
			{
				ft_rm_tetri(map, r, alpha[a]);
				return ft_tetri_base_map(map, nbt, o_r + 1, a);
			}
		}
		r++;
		i++;
	}
	return o_r;
}
