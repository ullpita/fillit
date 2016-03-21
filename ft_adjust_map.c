/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adjust_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 13:10:48 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/21 16:24:46 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#include <stdio.h>


static char		*ft_adjust_tetri(char *map, int maptmp, int  nbt)
{
	int		i;
	int		c;
	int		l;
	int		a;
	char	*alpha;
	
	map[8000] = '|';
	map[8000 - maptmp] = '|';
	i = 7999;
	c = -4;
	while (map[i] == '.')
	{
		i--;
		c++;
	}
	printf("\n%d\n", c);
	i = 7000;
	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	a = nbt - 1;
	l = 4;
	nbt = 1;
	printf("\n%d\n", maptmp);
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
				map[i + (l * c + 1)] = alpha[a];
				map[i - 1 + (l * c + 1)] = alpha[a];
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
	printf("%d\n\n", mapmin);
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
	i = 100;;
	map = ft_adjust_tetri(map, maptmp, nbt);
	return (map);
}
