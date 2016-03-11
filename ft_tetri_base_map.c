/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri_base_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 13:15:35 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/11 13:16:03 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char			*ft_tetri_base_map(char *map, int nbt, int r/*decrmenente a chaque fois quon appelle la fct et que dc il y a un '\n'*/, int a)
{
	char	alpha[28];
	int		i;
	int		n;
	int		c;

	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ;"
	i = 0;
	n = 0;		
	while (n < 4)
	{
		if (map[i] == '\n')
			n++;
		i++;
		c++;
	}
	while (i >= 0)
	{
		if (map[i] != '.' || map[i] != '\n')
			map[i] = '.';
	}
	while (map[i] != alpha[a])
	{
		i++;
		r++;
	}
	while (map[i] !='\0')
	{
		if (map[i] == alpha[a] && map[i - r] != '\n')
			map[i - r] = alpha[a];
		if (map[i] == alpha[a] && map[i - r] == '\n')
			tetri_base_map (r - 1);
		if ((i - r) > c)
		{
			if (!(a == nbt))
				tetri_base_map(a + 1);
			adjust_map(m + 1);
			//et ensuite refaire tetri_base_map
		}
		i++;
	}
	return (map);
}
