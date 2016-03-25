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

static int		ft_get_basetetri(char *map)
{
	int		i;
	
	i = 0;
	while (map[i] == '.' || map[i] == '\n')
		i++;
	return (map[i] - 65);
}

static char				*ft_loop_algo(char *map, int size, int nbt, int nbtbase, int r)
{
	map = ft_adjust_map(map, size);
	printf("%d | %d\n", r, nbtbase);
	if ((r = ft_tetri_base_map(map, nbt, r, nbtbase)) == -1)
		return ft_loop_algo(map, size + 1, nbt, 0, 0);
	nbtbase = ft_get_basetetri(map);
	if (!(ft_algo_map(map, nbt)))
	{
		ft_print_map(map, nbt);
		printf("\n");
		// usleep(1000000);
		return ft_loop_algo(map, size, nbt, nbtbase, r + 1);
	}
    return (map);
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
	map = ft_loop_algo(map, nbt, nbt, 0, 0);
	ft_print_map(map, nbt);
}
