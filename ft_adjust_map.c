/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adjust_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 13:10:48 by upierre-          #+#    #+#             */
/*   Updated: 2016/04/06 13:39:55 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#include <stdio.h>

char		*ft_adjust_tetri(char *map, int  size, int nbt)
{
	int		i;
	int		c;
	int		l;
	int		a;
	char	*alpha;
	int		mapmin;

	mapmin = 1;
	while ((mapmin * mapmin) < (size * 4))
		mapmin++;
	i = 8000;
	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	a = nbt - 1;
	l = 4;
	c = mapmin - 4;
	if (c > 0)
	{
		while (i >= 800)
		{
			if (map[i] != '.' && map[i - 1] != '.' && map[i - 2] != '.' && map[i - 3] != '.')
			{
				l--;
				map[i + (l * c + 1)] = alpha[a];
				map[i - 1 + (l * c + 1)] = alpha[a];
				map[i - 2 + (l * c + 1)] = alpha[a];
				map[i - 3 + (l * c + 1)] = alpha[a];
				map[i] = '.';
				map[i - 1] = '.';
				map[i - 2] = '.';
				map[i - 3] = '.';
				i -= 4;
				l -= 3;
			}
			if (map[i] != '.' && map[i - 1] != '.' && map[i - 2] != '.' && map[i - 3] == '.')
			{
				l--;
				map[i + (l * c + 1)] = alpha[a];
				map[i - 1 + (l * c + 1)] = alpha[a];
				map[i - 2 + (l * c + 1)] = alpha[a];
				map[i] = '.';
				map[i - 1] = '.';
				map[i - 2] = '.';
				i-= 3;
				l -= 2;
			}
			if (map[i] != '.' && map[i - 1] != '.' && map[i - 2] == '.' && l <= 2)
			{
				map[i + (l * c)] = alpha[a];
				map[i - 1 + (l * c)] = alpha[a];
				map[i] = '.';
				map[i - 1] = '.';
				i -= 2;
				l -= 2;
			}
			if (map[i] != '.' && map[i - 1] != '.' && map[i - 2] == '.' && l > 2)
			{
				l--;
				map[i + (l * c)] = alpha[a];
				map[i - 1 + (l * c)] = alpha[a];
				map[i] = '.';
				map[i - 1] = '.';
				i -= 2;
				l--;
			}
			if (map[i] != '.' && map[i + 1] == '.')
			{
				map[i + (l * c)] = alpha[a];
				map[i] = '.';
				i--;
				l--;
			}
			if (l == 0)
			{
				l = 4;
				a--;
			}
			else
				i--;

		}
	}
	return (map);
}

char			*ft_adjust_map(char *map, int nbt)
{
	int	i;
	int	n;
	int	mapmin;
	int	maptmp;

	mapmin = 1;
	i = 0 ;
	while ((mapmin * mapmin) < (nbt * 4))
		mapmin++;
	n = mapmin;
	maptmp = mapmin + 1;
	while (map[i] != '\0' && n > 0)
	{
		if (i == mapmin)
		{
			map[mapmin] = '\n';
			mapmin += maptmp;
			n--;
			i += 1;
		}
		else
		{
			map[i] = '.';
			i++;
		}
	}
	return (map);
}
