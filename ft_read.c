/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 16:06:30 by mbompoil          #+#    #+#             */
/*   Updated: 2016/01/19 16:33:30 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		ft_count(int argc, char **argv)
{
	int		x;
	int		ret;
	int		fd;
	char	buf;
	int		i;

	i = 0;
	x = 1;
	while (x < argc)
	{
		fd = open(argv[x], O_RDONLY);
		while ((ret = read(fd, &buf, 1)))
		{
			i++;
		}
		x++;
	}
	return (i);
}

char	*ft_read_arg(int argc, char **argv, int i)
{
	int		x;
	int		ret;
	int		fd;
	char	buf;
	char	*str;

	x = 1;
	str = malloc(sizeof(char) * (ft_count(argc, argv) + 1));
	while (x < argc)
	{
		fd = open(argv[x], O_RDONLY);
		while ((ret = read(fd, &buf, 1)))
		{
			str[i] = buf;
			i++;
		}
		x++;
		str[i] = '\0';
	}
	return (str);
}
