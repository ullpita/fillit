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

char			*ft_tetri_base_map(char *map, int nbt, int r, int a)
{
	char	*alpha;
	int		i;
	int		c;

	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	while (map[i] != alpha[a])
		i++;
	r = i;
	while (map[i] != '\0')
	{
		if (map[i] == alpha[a] && map[i - r] == '.')
			map[i - r] = alpha[a];
		if (map[i] == alpha[a] && map[i - r] == '\n')
			ft_tetri_base_map(map, nbt, r - 1, a);
		if ((i - r) > c)
		{
			if (!(a == nbt))
				ft_tetri_base_map(map, nbt, r, a + 1);
			return (NULL);//ft_adjust_map(nbt + 1);
		}
		i++;
	}
	return (map);
}