/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:35:57 by mbompoil          #+#    #+#             */
/*   Updated: 2016/02/02 15:16:31 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*str;
	char	**tab;
	int		i;

	i = 0;
	if (!(str = ft_read_arg(argc, argv, i)))
	{
		write (1, "error\n", 6);
		return (0);
	}
	tab	= ft_strsplit(str, '\n');
	if (!(ft_bigcheck(tab)))
		write(1, "error\n", 6);
	else
		write(1, "ok\n", 3);
	return (0);
}
