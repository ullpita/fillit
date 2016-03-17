/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adjust_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 13:10:48 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/17 20:00:57 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#include <stdio.h>

char		*ft_adjust_map(char *map, int nbt)
{
	int	i;
	int	n;
	int	mapmin;
	int	maptmp;
	
	mapmin = 1;
	i = 0 ;
	while ((mapmin * mapmin) < (nbt * 4))
		mapmin++;
	n = mapmin;
	maptmp = mapmin + 1;
	while (map[i] != '\0' && n > 0)
	{
		if (i == mapmin)
		{
			map[mapmin] = '\n';
			mapmin += maptmp;
			n--;
			i += 1;
		}
		else
		{
			map[i] = '.';
			i++;
		}
	}
	return (map);
}
