/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 15:05:08 by upierre-          #+#    #+#             */
/*   Updated: 2016/01/20 17:29:20 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		grillecheck()
{
	if (!(ft_strijcheck()))
		return (ft_maperror());
	if (!(ft_slashcheck))
		return (ft_maperror());

}

static int		ft_tetricheck()
{

}

int				ft_bigcheck()
{
	if (ft_grillecheck(str) == 0 || ft_tetricheck(str) == 0)
		return (0);
	else
		return (1);
}
