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

static char			*algomino(char *map, int r/* = 0 et on decremente*/, int nbt)
{
	char	alpha[28];
	char	basetetri;
	int		i;
	int		c;
	int		a;
	
	i = 0;
	while (map[i] == '.' || map[i] == '\n')
	{
		i++;
	}
	bastetri == map[i];
	a = 0;
	c = 0;
	i = 0;
	while (map[i] && a < 4)
	{
		if (map[i] == '\n')
		a++;
		i++;
		c++;
	}
	i = 0;
	while (a <= nbt)
	{
		while (map[i] != alpha[a])
		{
			i++;
			r++;
		}
		while (l < 4)
		{
			if (map[i] == alpha[a] && alpha[a] != basetetri && map[i - r] == '.')
			{
				while (map[i] && l < 4) /*notre compteur de lettre d'un tetri qui evite d'aller jusquau bout de map*/
				{
					if (map[i] == alpha[a] && map[i - r] == '.')
					{
						map[i - r] == alpha[a];
						l++;
					}
					if (map[i] == alpha[a] && map[i - r] != '.' )
						algo_map(r - 1);
					i++;
				}
				if ((i - r) > c)
				{
					tetri_base_map(char *map, int nbt, int r - 1, int a)
					//if (!(a == nbt && basetetri soit le plus a droite possible dans base_tetri))//si on l'appelle de algo_map et que r-1 ne peux pas se realiser renvoie null et donc adjustmap (m + 1)
					//
					//base_tetri(r - 1);//on decale donc le tetri de base un cran a droite et ensuite il faut rappeler algo_map
					//adjust_map(m + 1);
				}
			}
		}
		i = 0;
		r = 0;
		a++;
	}
	return (map);
}
