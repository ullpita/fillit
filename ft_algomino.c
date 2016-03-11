/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algomino.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 18:11:14 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/11 13:14:55 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_size_map(char *map)
{
	int		i;
	int		c;
	int		n;
	
	i = 0;
	c = 0;
	n = 0;
	while (map[i] && n < 4)
	{
		if (map[i] == '\n')
			n++;
		i++;
		c++;
	}
	return (c)
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
	bastetri = map[i];
	return (basetetri);
}

static			ft_algo_map(char *map, int c, int r, int a)
{
	int		i;
	int		l;
	
	i = 0
	while (l < 4)
	{
		if (map[i] == alpha[a] && alpha[a] != basetetri && map[i - r] == '.')
		{
			while (map[i] && l < 4) /*notre compteur de lettre d'un tetri qui evite d'aller jusquau bout de map*/
			{
				if (map[i] == alpha[a] && map[i - r] == '.')
				{
					map[i - r] == alpha[a];
					l++;
				}
				if (map[i] == alpha[a] && map[i - r] != '.' )
					algo_map(r - 1);
				i++;
			}
			if ((i - r) > c)
				tetri_base_map(char *map, int nbt, int r - 1, int a)
		}
	return (map);
	}
}

char			*ft_algomino(char *map, int r/* = 0 et on decremente*/, int nbt)
{
	char	alpha[28];
	char	basetetri;
	int		i;
	int		c;
	int		a;
	
	c = ft_size_map(map)
	basetetri = ft_basetetri(map)
	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	i = 0;
	a = 0;
	while (a <= nbt)
	{
		while (map[i] != alpha[a])
			i++;
		r = i;
		map = ft_algo_map()
		i = 0;
		r = 0;
		a++;
	}
	return (map);
}