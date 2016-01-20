/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 15:05:08 by upierre-          #+#    #+#             */
/*   Updated: 2016/01/20 18:02:41 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_grillecheck(char *str)
{
//	if (!(ft_strijcheck(str)))
//		return (0);
	if (!(ft_slashcheck(str)))
		return (0);
	else
		return (1);

}

//static int		ft_tetricheck()
//{
//
//}

int				ft_bigcheck(char *str)
{
	if (ft_grillecheck(str) == 0) /*|| ft_tetricheck(str) == 0)*/
		return (0);
	else
		return (1);
}
