/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:35:57 by mbompoil          #+#    #+#             */
/*   Updated: 2016/01/19 17:01:08 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*str;
	int		i;

	i = 0 ;
	str = ft_read_arg(argc, argv, i);
	printf("%s \n",str);
	return (0);
}
