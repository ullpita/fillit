/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 16:06:30 by mbompoil          #+#    #+#             */
/*   Updated: 2016/01/19 16:19:38 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_read_arg(int argc, char **argv, int i)
{
	int		x;
	int		ret;
	int		fd;
	char	buf;
	char	*str;

	x = 1;
	str = malloc(sizeof(char) * 60000000000);
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
