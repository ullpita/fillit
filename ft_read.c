/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 17:04:43 by mbompoil          #+#    #+#             */
/*   Updated: 2016/02/02 15:15:04 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fillit.h"
#include <stdio.h>
static int		ft_count_arg(int argc, char **argv)
{
	int		ret;
	int		fd;
	char	buf;
	int		i;

	i = 0;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, &buf, 1)))
			i++;
	}
	return (i);
}

char			*ft_read_arg(int argc, char **argv, int i)
{
	int		ret;
	int		fd;
	char	buf;
	char	*str;

	if (argc == 2)
	{
		str = malloc(sizeof(char) * (ft_count_arg(argc, argv) + 1));
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, &buf, 1)))
		{
			str[i] = buf;
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (0);
}
