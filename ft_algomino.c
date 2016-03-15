/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algomino.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 18:11:14 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/11 13:14:55 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char				*ft_loop_algo(char *map, nbtadjust, nbtbase, r)
{
    map = ft_adjust_map(nbtbase);
    if (!(map = ft_teri_base_map(nbtbase, r))
        ft_loop_algo(nbtbase + 1);
    if (!(map = ft_algo_map))
        ft_loop_algo(nbtbase + 1, r - 1)
    return (map);
}

void			ft_algomino(char **tab)
{
	int	r;
	int	nbt;
	char *map;
	
	r = 0;
	while (tab[i])
	{
		nbt++;
		i++;
	}
	map = ft_memalloc(sizeof(char) * 22000);
    map = add_tetri_map(tab, map);
	map = ft_loop_algo;
	ft_print_map(map);
}












































