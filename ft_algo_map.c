/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 18:11:14 by upierre-          #+#    #+#             */
/*   Updated: 2016/04/06 15:50:44 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#include <stdio.h>

static int		ft_size_map(char *map)
{
	int		i;
	
	i = 8000;
	while (map[i] != '\n')
		i--;
	return (i);
}

static char		ft_basetetri(char *map)
{
	int		i;
	char	basetetri;
	
	i = 0;
	while (map[i] == '.' || map[i] == '\n')
	{
		i++;
	}
	basetetri = map[i];
	return (basetetri);
}

static void		ft_rm_tetri(char *map, int r, char a)
{
	int	i = 0;

	while (i < r)
	{
		if (map[i] == a)
			map[i] = '.';
		i++;
	}
}

static char		*ft_place_tetri(char *map, int r, int map_size, int a)
{
	char	*alpha;
	int		i;
	int		completed;
	int		o_r;

	o_r = r;
	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	while (map[i] != alpha[a])
		i++;
	completed = 0;
	while (completed < 4)
	{
		// usleep(250000);
		if (r >= map_size)
		{
			ft_rm_tetri(map, r, alpha[a]);
			return (NULL);
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
				return ft_place_tetri(map, o_r + 1, map_size, a);
			}
		}
		r++;
		i++;
	}
	return (map);
}

char			*ft_algo_map(char *map, int nbt)
{
	char	*alpha;
	char	basetetri;
	int		i;
	int		c;
	int		a;
	
	c = ft_size_map(map);
	basetetri = ft_basetetri(map);
	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	a = 0;
	while (a < nbt)
	{
		if (alpha[a] == basetetri)
			a++;
		i = 100;
		while (map[i] != alpha[a])
			i++;
		if (!ft_place_tetri(map, 0, c, a))
			return (NULL);
		a++;
//		printf("\n\n%s\n\n", map);
//		usleep(500000);
	}
	return (map);
}
