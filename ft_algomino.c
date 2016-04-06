/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algomino.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 18:11:14 by upierre-          #+#    #+#             */
/*   Updated: 2016/04/06 15:50:47 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

static void		ft_clean_all(char *map)
{
	int i;

	i = 0;
	while (i < 800)
	{
		if (map[i] != '\n')
			map[i] = '.';
		i++;
	}
}



static int		ft_get_basetetri(char *map)
{
	int		i;
	
	i = 0;
	while (map[i] == '.' || map[i] == '\n')
		i++;
	return (map[i] - 65);
}

static int				ft_loop_algo(char *map, int size, int nbt, int nbtbase, int r)
{
	ft_clean_all(map);
	if ((r = ft_tetri_base_map(map, nbt, r, nbtbase)) == -1)
	{
		ft_resize_map(map);
		ft_resize_tetri(map, nbt);
		return ft_loop_algo(map, size + 1, nbt, 0, 0);
	}
	nbtbase = ft_get_basetetri(map);
	if (!(ft_algo_map(map, nbt)))
	{
		return ft_loop_algo(map, size, nbt, nbtbase, r + 1);
	}
    return (size + 1);
}

void			ft_algomino(char **tab)
{
	int		nbt;
	char 	*map;
	int		a;
	
	a = 0;
	nbt = 0;
	while (tab[nbt])
		nbt++;
	map = ft_memalloc(sizeof(char) * 8000);
	ft_add_tetri_map(tab, map);
	ft_adjust_map(map, nbt);
	ft_adjust_tetri(map, nbt, nbt);
	ft_print_map(map, ft_loop_algo(map, nbt, nbt, 0, 0));
}
