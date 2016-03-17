/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_tetri_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 14:27:42 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/17 14:06:41 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#include "stdio.h"

char			*ft_add_tetri_map(char **tab, char *map)
{
	int		i;
	int		j;
	int		m;

	i = 0;
	m = 22000;
	while (tab[i])
		i++;
	printf("%d\n", i);
	while (i >= 0)
	{
		printf("coucou2\n");
		j = 20;
		while (j >= 0)
		{
			printf("coucou1\n");
			if (tab[i][j] == '\n')
			{
				printf("coucou3\n");
				map[m] = '.';
			}
			else
			{
				printf("coucou4\n");
				map[m] = tab[i][j];
			}
			printf("coucou1\n");
			j--;
			m--;
		}
		i--;
	}
	return (map);
}
