/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algomino.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 18:11:14 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/21 19:10:21 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char				*ft_loop_algo(char *map, int nbt, int nbtbase, int r)
{
	int nbtini;
	int	a;
	
	nbtini = nbt;
	r = 0;
	a = 0;
	map = ft_adjust_map(map, nbt);
	if (!(map = ft_tetri_base_map(map,nbtini, r, a)))
			ft_loop_algo(map, nbt + 1, nbtbase, r);
	if (!(map = ft_algo_map(map, r, nbt)))
		ft_loop_algo(map, nbt, nbtbase + 1, r - 1);
    return (map);
}

#include <stdio.h>

void			ft_algomino(char **tab)
{
	int	nbt;
	int nbtbase;
	char *map;
	int	r;
	
	nbt = 0;
	while (tab[nbt])
		nbt++;
	nbtbase = nbt;
	map = ft_memalloc(sizeof(char) * 8000);
	//printf("%s", map);	
    map = ft_add_tetri_map(tab, map);
//	printf("%s", map);
//	printf("\n\n");
//	map = ft_adjust_map(map, nbt);
//	printf("%s", map);
	r = 0;
	map = ft_loop_algo(map, nbt, nbtbase, r);
	printf("%s", map);
	//printf("%d\n", nbt);
	//ft_print_map(map, nbt);
}



















