/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbompoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:55:25 by mbompoil          #+#    #+#             */
/*   Updated: 2016/03/11 14:24:58 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_count(char *s, char c)
{
	int		count;
	int		blash;
	int		i;

	i = 0;
	count = 0;
	blash = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			blash++;
		if (s[i] != c)
			blash = 0;
		if (blash == 2 || s[i + 1] == '\0')
			count++;
		i++;
	}
	if ((i + 1) % 21 != 0)
		return (0);
	return (count);
}

char			**ft_strsplit2(char *s, char c)
{
	char	**tab;
	int		j;
	int		nbc;

	j = 0;
	nbc = ft_count(s, c);
	if (!(tab = (char **)malloc(sizeof(*tab) * (nbc + 1))))
		return (NULL);
	tab[nbc] = NULL;
	while (nbc--)
	{
		while (*s == c && *s)
			s++;
		if (!(tab[j] = ft_strsub2(s, 0, 20)))
			return (NULL);
		s = s + 21;
		j++;
	}
	return (tab);
}
