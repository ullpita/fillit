/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algomino.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 18:11:14 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/25 14:31:17 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char				*ft_loop_algo(char *map, int nbt, int nbtbase, int r)
{
	int nbtini;
	int	a;
	
	nbtini = nbt;
	a = 0;
	map = ft_adjust_map(map, nbt);
	printf("\n%d\n", nbt);
	ft_print_map(map, nbt);
	if (!ft_tetri_base_map(map, nbtini, r, a))
		return ft_loop_algo(map, nbt + 1, nbtbase, r);
	if (!(ft_algo_map(map, r, nbt)))
		return ft_loop_algo(map, nbt, nbtbase, r + 1);
    return (map);
}

void			ft_algomino(char **tab)
{
	int		nbt;
	int 	nbtbase;
	char 	*map;
	int		a;
	
	a = 0;
	nbt = 0;
	while (tab[nbt])
		nbt++;
	nbtbase = nbt;
	map = ft_memalloc(sizeof(char) * 8000);
	map = ft_add_tetri_map(tab, map);
	map = ft_loop_algo(map, nbt, nbtbase, 0);
	ft_print_map(map, nbt);
}
