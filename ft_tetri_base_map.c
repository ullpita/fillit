/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri_base_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 13:15:35 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/11 15:05:26 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


static char		*ft_tetri_base_algo(char *map, a, r, c)
{
	char	alpha[28]
	int		i;
	int		nbt;
	
	nbt = ft_nb_tetri
	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == alpha[a] && map[i - r] != '\n')
			map[i - r] = alpha[a];
		if (map[i] == alpha[a] && map[i - r] == '\n')
			ft_tetri_base_map(r - 1);
		if ((i - r) > c)
		{
			if (!(a == nbt))
				ft_tetri_base_map(a + 1);
			ft_adjust_map(m + 1);
			//et ensuite refaire ft_tetri_base_map()
		}
		i++;
	}	
}

char			*ft_tetri_base_map(char *map, int r/*decrmenente a chaque fois quon appelle la fct et que dc il y a un '\n'*/, int a)
{
	char	alpha[28];
	int		i;
	int		n;
	int		c;

	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	n = 0;
	while (n < 4)
	{
		if (map[i] != '.' || map[i] != '\n')
			map[i] = '.';
		if (map[i] == '\n')
			n++;
		i++;
		c++;
	}
	while (map[i] != alpha[a])
		i++;
	r = i;
	map = ft_tetri_base_algo(*map, a, r, c);
	return (map);
}