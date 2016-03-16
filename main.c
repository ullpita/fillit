/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:35:57 by mbompoil          #+#    #+#             */
/*   Updated: 2016/02/02 15:16:31 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void    ft_print_map(char *map, int nb)
{
    int i;
    
    i = 0;
    while (i != nb)
    {
        ft_putchar(map[i]);
        i++;
    }
}

/*void	ft_start_algo(char **tab)
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
	map = ft_memalloc(sizeof(*map) * 22000);
	map = add_tetri_map(tab, map);
	map = algomino(map, r, nbt);
	ft_print_map(map);
}*/

int		main(int argc, char **argv)
{
	char	*str;
	char	**tab;
	int		i;

	i = 0;
	if (!(str = ft_read_arg(argc, argv, i)))
	{
		write (1, "error\n", 6);
		return (0);
	}
	tab	= ft_strsplit(str, '\n');
	if (!(ft_bigcheck(tab)))
	{
		write(1, "error\n", 6);
		return (0);
	}
	tab = ft_alphamino(tab);
	ft_algomino(tab);
	return (0);
}
/*
map = ft_add_tetri_map(*tab, map);
map = ft_adjust_map(map, nbtadjust = ft_nbt, c = 1)
map = ft_tetri_base_map(map, rtetri = 0, a = 0);
map = ft_algomino(map, ralgo = 0, nbtetri = 0)
*/
