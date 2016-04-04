/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_tetri_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 14:27:42 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/29 13:17:41 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
/*
char			*ft_add_tetri_map(char **tab, char *map)
{
	int		i;
	int		j;
	int		n;
	int		m;

	i = 0;
	m = 800;
	while (tab[i])
	{
		j = 0;
		n = 4;
		while (n > 0)
		{
			if (tab[i][j] != '\n')
				map[m] = tab[i][j];
			if (tab[i][j] == '\n')
				n--;
			j++;
			m++;
		}
		i++;
	}
	return (map);
}*/

char			*ft_add_tetri_map(char **tab, char *map)
{
	int		i;
	int		j;
	int		n;
	int		m;

	i = 0;
	m = 3000;
	while (tab[i])
	{
		j = 0;
		n = 4;
		while (n > 0)
		{
			if (tab[i][j] != '\n')
				map[m] = tab[i][j];
			if (tab[i][j] == '\n')
				n--;
			j++;
			m++;
		}
		j = 150;
		while (j > 0)
		{
			m++;
			j--;
		}
		i++;
	}
	return (map);
}
