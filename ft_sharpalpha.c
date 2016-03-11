/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sharpalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 14:18:36 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/11 14:20:25 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_alphamino(char **tab)
{
	int		i;
	int		j;
	char	alpha;

	i = 0;
	alpha = 'A';
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
				tab[i][j] = alpha;
			j++;
		}
		i++;
		alpha++;
	}
	return (tab);
}
