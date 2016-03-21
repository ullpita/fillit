/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 18:11:14 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/21 19:10:18 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#include <stdio.h>

static int		ft_size_map(char *map)
{
	int		i;
	int		c;
	
	i = 8000;
	while (map[i] != '\n')
		i--;
	c = 8000 - i;
	return (c);
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

static	char		*ft_place_tetri(char *map, int r, int c, int a)
{
	int		i;
	int		l;
	char	*alpha;


	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 100;
	l = 0;
	while (map[i] != alpha[a])
		i++;
	if (map[i] == alpha[a] && map[i - r] == '.')
	{
		while (map[i] && l < 4) /*notre compteur de lettre d'un tetri qui evite d'aller jusquau bout de map*/
		{
			if (map[i] == alpha[a] && map[i - r] == '.')
			{
				map[i - r] = alpha[a];
				l++;
			}
			if (map[i] == alpha[a] && map[i - r] != '.' )
				ft_place_tetri(map, r - 1, c, a);
			i++;
		}
		if ((i - r) > c)
			return (NULL);//ft_tetri_base_map(map, nbt + 1, r - 1/*pas le mm r que algo_map*/, a/*pas le mm a que algo_map*/);
	}
	return (map);
}

char			*ft_algo_map(char *map, int r/* = 0 et on decremente*/, int nbt)
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
		r = i;
		map = ft_place_tetri(map, r, c, a);
		r = 0;
		a++;
	}
	return (map);
}













