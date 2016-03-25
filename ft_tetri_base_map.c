/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri_base_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 13:15:35 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/21 18:13:48 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_rm_tetri(char *map, int r, char a)
{
	int	x = 0;
	while (x < r)
	{
		if (map[x] == a)
		{
			map[x] = '.';
		}
		x++;
	}
}

char			*ft_tetri_base_map(char *map, int nbt, int r, int a)
{
	char	*alpha;
	int		i;
	int		map_size;
	int		completed;
	int		o_r;

	o_r = r;
	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	map_size = 8000;
	while (map[map_size] != '\n')
		map_size--;
	i = 0;
	while (map[i] != alpha[a])
		i++;
	completed = 0;
	while (completed < 4)
	{
		if (r >= map_size)
		{
			ft_rm_tetri(map, r, alpha[a]);
			return (a <= nbt ? ft_tetri_base_map(map, nbt, o_r, a++) : NULL);
		}
		else if (map[i] == alpha[a])
		{
			if (map[r] == '.')
			{
				map[r] = map[i];
				completed++;
			}
			else {
				ft_rm_tetri(map, r, alpha[a]);
				ft_tetri_base_map(map, nbt, o_r + 1, a);
			}
			r++;
		}
	}
	printf("\n%s\n", map);
	return (map);
}

// char			*ft_tetri_base_map(char *map, int nbt, int r, int a)
// {
// 	char	*alpha;
// 	int		i;
// 	int		c;
// 	int		l;
// 	int		o_r;

// 	o_r = r;
// 	i = 8000;
// 	while (map[i] != '\n')
// 		i--;
// 	c = i;
// 	i = 0;
// 	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	while (map[i] != alpha[a])
// 		i++;
// 	l = 0;
// 	while (map[i] && l < 4)
// 	{
// 		if (r >= c)
// 		{
// 			if (a <= nbt)
// 			{
// 				ft_rm_tetri(map, r, alpha[a]);
// 				return ft_tetri_base_map(map, nbt, o_r, a + 1);
// 			}
// 			else
// 			{
// 				return (NULL);//ft_adjust_map(nbt + 1);
// 			}
// 		}
// 		else if (map[i] == alpha[a] && map[r] == '.')
// 		{
// 			map[r++] = alpha[a];
// 			l++;
// 		}
// 		else
// 			ft_rm_tetri(map, r, alpha[a]);
// 		i++;
// 	}
// 	return (map);
// }
