/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algomino.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 18:11:14 by upierre-          #+#    #+#             */
/*   Updated: 2016/04/04 16:49:55 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
	ft_adjust_map(map, size);
	if ((r = ft_tetri_base_map(map, nbt, r, nbtbase)) == -1)
	{
		ft_adjust_tetri(map, size + 1, nbt);
		return ft_loop_algo(map, size + 1, nbt, 0, 0);
	}
	nbtbase = ft_get_basetetri(map);
	if (!(ft_algo_map(map, nbt)))
	{
		return ft_loop_algo(map, size, nbt, nbtbase, r + 1);
	}
    return (size);
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
	map = ft_add_tetri_map(tab, map);
	ft_print_map(map, ft_loop_algo(map, nbt, nbt, 0, 0));
}
