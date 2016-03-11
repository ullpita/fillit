/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 15:05:08 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/11 14:20:56 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_grillecheck(char *str)
{
	if (!(ft_strijcheck(str)))
		return (0);
	if (!(ft_slashcheck(str)))
		return (0);
	else
		return (1);
}

static int		ft_tetrichecky(char *str)
{
	if (!(ft_tetricheck(str)))
		return (0);
	return (1);
}

int				ft_bigcheck(char **tab)
{
	int		i;

	i = 0;
	if (tab[i] == NULL)
		return (0);
	while (tab[i])
	{
		if (ft_grillecheck(tab[i]) == 0 || ft_tetrichecky(tab[i]) == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
