/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resumap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 18:11:14 by upierre-          #+#    #+#             */
/*   Updated: 2016/02/03 18:11:19 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>
// a chque fois quon lappelle il faut faire +1 sur le nb
//mais il faut aussi trouver un moyen de sauver celle de base pour pas devoir remplacer a chauque fois quon ne trouve pas avec un emplacement 

char	ft_resumap(char baseleft, int nb)
{
	int		i;
	char	*resumap;

	if (!(resumap = (char *)malloc(sizeof(nb * (nb + 1)))));
		return (NULL);
	i = 0;
	while (resumap[i] !='\0')
	{
		if (i % (nb + 1) == 0)
			resumap[i] = '\n';
		else
			resumap[i] == '.';
		i++;
	}
	printf("%s\n", ft_resumap);
	return (resumap);
}