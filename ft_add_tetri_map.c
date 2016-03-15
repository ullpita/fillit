/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_tetri_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 14:27:42 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/11 14:28:34 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char			*ft_add_tetri_map(char **tab, char *map)
{
	int		i;
	int		j;
	int		m;

	i = 0;
	m = 22000;
	while (tab[i])
		i++;
	while (i >= 0)
	{
		j = 20;
		while (j >= 0)
		{
			if (tab[i][j] == '\n')
				map[m] = '.';
			else
				map[m] = tab[i][j];
			j--;
			m--;
		}
		i++;
	}
	return (map);
}