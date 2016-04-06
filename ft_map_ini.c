/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_ini.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 14:50:31 by mbompoil          #+#    #+#             */
/*   Updated: 2016/04/06 15:43:09 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#include <stdio.h>

char		*ft_resize_tetri(char *map, int  nbt)
{
	int		i;
	int		l;
	int		a;
	char	*alpha;

	i = 7950;
	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	a = nbt - 1;
	l = 4;
	while (i >= 800)
	{
		if (map[i] != '.' && map[i - 1] != '.' && map[i - 2] != '.' && map[i - 3] != '.')
		{
			l--;
			map[i + (l * 1 + 1)] = alpha[a];
			map[i - 1 + (l * 1 + 1)] = alpha[a];
			map[i - 2 + (l * 1 + 1)] = alpha[a];
			map[i - 3 + (l * 1 + 1)] = alpha[a];
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
			map[i + (l * 1 + 1)] = alpha[a];
			map[i - 1 + (l * 1 + 1)] = alpha[a];
			map[i - 2 + (l * 1 + 1)] = alpha[a];
			map[i] = '.';
			map[i - 1] = '.';
			map[i - 2] = '.';
			i-= 3;
			l -= 2;
		}
		if (map[i] != '.' && map[i - 1] != '.' && map[i - 2] == '.' && l <= 2)
		{
			map[i + (l * 1)] = alpha[a];
			map[i - 1 + (l * 1)] = alpha[a];
			map[i] = '.';
			map[i - 1] = '.';
			i -= 2;
			l -= 2;
		}
		if (map[i] != '.' && map[i - 1] != '.' && map[i - 2] == '.' && l > 2)
		{
			l--;
			map[i + (l * 1)] = alpha[a];
			map[i - 1 + (l * 1)] = alpha[a];
			map[i] = '.';
			map[i - 1] = '.';
			i -= 2;
			l--;
		}
		if (map[i] != '.' && map[i + 1] == '.')
		{
			map[i + (l * 1)] = alpha[a];
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
	return (map);
}

char			*ft_resize_map(char *map)
{
	int		i;
	int		n;
	int		n_tmp;

	i = 0 ;
	n = 1;
	while (i < 800)
	{
		if (map[i] == '\n')
			n++;
		i++;
	}
	n_tmp = n;
	while (i > 0 &&  n > 0)
	{
		if (map[i] == '\n' && n == n_tmp)
		{
			map[i + n * 2] = '\n';
			n--;
		}
		if (map[i] == '\n')
		{
			map[i] = '.';
			map[i + n] = '\n';
			n--;
			i -= n;
		}
		else
		{
			map[i] = '.';
			i--;
		}
	}
	return (map);
}
