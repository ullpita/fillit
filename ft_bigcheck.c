/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 15:05:08 by upierre-          #+#    #+#             */
/*   Updated: 2016/01/22 16:21:59 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_grillecheck(char *str)
{
	if (!(ft_strijcheck(str)))
		return (0);
	if (!(ft_slashcheck(str)))
		return (0);
	else
		return (1);

}

int		ft_tetrichecky(char *str)
{
	if (!(ft_tetricheck(str)))
		return (0);
	return (1);
}

int				ft_bigcheck(char *str)
{
	if (ft_grillecheck(str) == 0 || ft_tetrichecky(str) == 0)
		return (0);
	else
		return (1);
}
