/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adjust_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 13:10:48 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/18 21:01:06 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#include <stdio.h>

static char		*ft_adjust_tetri(char *map, int maptmp,int  nbt)
{
	int		i;
	int		c;
	char	*alpha;
	int		a;
	int		l;

	i = 8000;
	while (i > 7444)
	{
		if (i == 8000 || i == (8000 - maptmp))
			map[i] = '|';
		i--;
	}
	i = 7999;
	c = 0;
	while (map[i] == '.')
	{
		i--;
		c++;
	}
	c = c - 4;
	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	a = 0;
	i = 7440;
	return (map);
	while (i < 8000)
	{
		l = 4;
		break;
		while (l > 0 && i < 8000)
		{
			break;
			if (map[i] == alpha[a] && map[i + 1] == alpha[a])
			{
				map[i - (l * c * nbt)] = alpha[a];
		 		map[(i + 1) - (l * c * nbt)] = alpha[a];
				map[i] = '.';
				map[i + 1] = '.';
				l -= 2;
				i++;
			}
			if (map[i] == alpha[a])
			{
				map[i - (l * c * nbt)] = alpha[a];
				map[i] = '.';
				l--;
			}
			else
				i++;
		}
		break;
		a++;
		nbt--;
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
	map = ft_adjust_tetri(map, maptmp, nbt);
	return (map);
}
