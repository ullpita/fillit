/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:21:32 by mbompoil          #+#    #+#             */
/*   Updated: 2016/01/27 17:07:45 by mbompoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strsub(char *s1, unsigned int start, size_t len)
{
	char	*dst;
	int		i;

	i = 0;
	if (!(dst = (char *)malloc(sizeof(*dst) * (len + 1))))
		return (NULL);
	while (len != 0)
	{
		dst[i] = s1[start];
		len--;
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}
