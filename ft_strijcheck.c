/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strijcheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:15:17 by upierre-          #+#    #+#             */
/*   Updated: 2016/01/20 16:57:26 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_strijcheck(char *str)
{
	i = 12;
	j = 4;
	
	while (str)
	{
		if (*str == '.')
			i--;
		if (*str == '#')
			j--;
		if (*str == '\n')
		str++;
		else
			break;
	}
	if (!(i + j == 0))
		return (0);
	return (1);
}