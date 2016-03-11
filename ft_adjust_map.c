/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adjust_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 13:10:48 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/11 13:52:49 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char		*ft_adjust_onetwo(char *map, int m)
{
	if (m = 1)
	{
		map[2] = '\n';
		map[5] = '\n';
	}
	if (m = 2)
	{
		map[3] = '\n';
		map[7] = '\n';
		map[11] = '\n';
	}
	return (map);
}

static char		*ft_adjust_firstime(char *map, int mapmin, int i, int n)
{
	while (n <= 4)
	{
		if (i == mapmin)
		{
			map[mapmin + 1] == '\n';
			mapmin += mapmin;
			n++;
			i += 2;
		}
		else
		{
			map[i] == '.';
			i++;
		}
	}
	return (map);
}

static char		*ft_adjust_bigger(char *map, int mapmin, int i, int n)
{
	if (c > 1)
	{
		mapmin = 0;
		while (map[i] != '\n')
		{
			i++;
			mapmin++;
		}
		while (n <= 4)
		{
			if (map[i] == '\n')
			{
				map[i] == '.';
				n++;
			}
			i++;
		}
		while (n >= 0)
		{
			map[mapmin + 1] == '\n';
			mapmin += mapmin;
			n--;
		}
	}
	return (map);
}

char			*ft_adjust_map(char *map, int m, int c)
{
	int		i;
	int		n;
	int		mapmin;

	if (m == 1 || m == 2)
	{
		map = adjust_map_onetwwo(map, m);
		return (map);
	}
	i = 0;
	n = 0;
	mapmin = 1;
	while ((mapmin * mapmin) < (m * 4))
		mapmin++;
	if (c == 1)
	{
		map = adjust_map_firstime(map, mapmin, i, n);
		return (map);
	}
	if (c > 1)
	{
		map = adjust_map(map, mapmin, i, n);
		return (map);
	}
	return (0);
}