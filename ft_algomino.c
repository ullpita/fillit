/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algomino.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 18:11:14 by upierre-          #+#    #+#             */
/*   Updated: 2016/03/10 16:48:19 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char			*add_tetri_map(char **tab, char *map)
{
	int		i;
	int		j;
	int		m;
	
	i = 0;
	m = 22000 //(la valeure de la map qu'on va definir je ne sais ou plus haut)
	//ne pas oublier de rajouter un 0 dans un dernier tab[i] dans le split 
	while (tab[i])
		i++;
	while (i >= 0)
	{
		j = 20;
		while (j >= 0)
		{
<<<<<<< HEAD
			if (tab[i][j] == '\n')
				map[m] = '.';
			else
				map[m] = tab[i][j];
			j--;
			m--;
=======
			j = 20;
			while (j >= 0)
			{
				if (tab[i][j] == '\n')
					map[m] = '.';
				else
					map[m] = tab[i][j];
				j--;
				m--;
			}
			i++;
>>>>>>> f8befb694e5785b4449c18a99b48e06625d8092f
		}
		i++;
	}
	return (map);
}

<<<<<<< HEAD
static char			adjust_map(char *map , int m = 1 /*nb de tetri, mais apres ce n'est plus en rapport avec le nb de tetri*/, int c = 1/*si on y arrive du premier coup on juste decaler '/n' a droite pas refaire algo*/)
{
	int		i;
	int		n;
	int		mapmin;

	//il faut gerer les deux exceptions ou il n'y a pas 4 '\n'
	if (m = 1)
	{
		map[2] = '\n';
		map[5] = '\n';
		return (map);
	}
	if (m = 2)
	{
		map[3] = '\n';
		map[7] = '\n';
		map[11] = '\n';
		return (map);
	}
	i = 0;
	n = 0;
	mapmin = 1;
	while ((mapmin * mapmin) < (m * 4))
		mapmin++;
	if (c == 1)//si c'est la premiere fois qu'on appelle adjust_map
	{
		while (n <= 4)
		{
			if (i == mapmin)
			{
				map[mapmin + 1] == '\n';
				mapmin += mapmin;
					n++;
					i += 2;//il faut incrementer de 2 car il faut passer au caractere apres le '\n' quon vient d'ajouter en + 1 
				}
				else
				{
					map[i] == '.';
					i++;
				}
		}
		return (map);
	}
	if (c > 1)
	{
		mapmin = 0;
		while (map[i] != '\n')
		{
			i++;
			mapmin++;
		}
		while (n <= 4)
		{
			if (map[i] == '\n')
=======


static char			adjust_map(char *resumap , int m = 1 /*nb de tetri, mais apres ce n'est plus en rapport avec le nb de tetri*/, int c = 1/*si on y arrive du premier coup on juste decaler '/n' a droite pas refaire algo*/)
{
		int		i;
		int		n;
		int		mapmin;
	
		//il faut gerer les deux exceptions ou il n'y a pas 4 '\n'
		if (m = 1)
		{
			map[2] = '\n';
			map[5] = '\n';
			return (resumap);
		}
		if (m = 2)
		{
			map[3] = '\n';
			map[7] = '\n';
			map[11] = '\n';
			return (resumap);
		}
		i = 0;
		n = 0;
		mapmin = 1;
		while ((mapmin * mapmin) < (m * 4))
			mapmin++;
		if (c == 1)//si c'est la premiere fois qu'on appelle adjust_map
		{
			while (n <= 4)
>>>>>>> f8befb694e5785b4449c18a99b48e06625d8092f
			{
				map[i] == '.';
				n++;
			}
			i++;
		}
		while (n >= 0)
		{
			map[mapmin + 1] == '\n';
			mapmin += mapmin;
			n--;
		}
<<<<<<< HEAD
	}
	return (map);
}


static char			*tetri_base_map(char *map, nbt, int r/*decrmenente a chaque fois quon appelle la fct et que dc il y a un '\n'*/, int a/*le nombre de tetri*/)
=======
		return (resumap);
}


static char			tetri_base_map(char resumap, int a, int nbt, int r/*decrmenente a chaque fois quon appelle la fct et que dc il y a un '\n'*/) 
>>>>>>> f8befb694e5785b4449c18a99b48e06625d8092f
{
	char	alpha[28];
	int		i;
	int		n;
	int		c;

	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ;"
	i = 0;
	n = 0;		
	while (n < 4)
	{
		if (map[i] == '\n')
			n++;
		i++;
		c++;
	}
	while (map[i] != alpha[a])
	{
		i++;
		r++;
	}
	while (map[i] !='\0')
	{
		if (map[i] == alpha[a] && map[i - r] != '\n')
			map[i - r] = alpha[a];
		if (map[i] == alpha[a] && map[i - r] == '\n')
			tetri_base_map (r - 1);
		if ((i - r) > c)
		{
<<<<<<< HEAD
			if (!(a == nbt))
				tetri_base_map(a + 1);
			adjust_map(m + 1);
			//et ensuite refaire tetri_base_map
=======
			if (resumap[i] == alpha[a] && map[i - r] != '\n')
				map[i - r] = alpha[a];
			if (map[i] == alpha[a] && map[i - r] == '\n')
				tetri_base_map (r - 1);
			if ((i - r) > c)
			{
				if (!(a == nbt))
					tetri_base_map(a + 1, r = 0);
				adjust_map(m + 1);
				//et ensuite refaire tetri_base_map (a = 0, r = 0)
			}
			i++;
>>>>>>> f8befb694e5785b4449c18a99b48e06625d8092f
		}
		i++;
	}
	return (map);
}



static char			*algo_map(char *map, int r /*commence a 0 et on decremente*/, int nbt/*nb de tetri*/)
{
	char	alpha[28];
	char	basetetri;
	int		i;
	int		c;
	int		a;
	
	i = 0;
	while (map[i] == '.' || map[i] == '\n')
	{
		i++;
	}
	bastetri == map[i];
	a = 0;
	c = 0;
	i = 0;
	while (map[i] && a < 4)
	{
		if (map[i] == '\n')
		a++;
		i++;
		c++;
	}
	i = 0;
	while (a <= nbt)
	{
		while (map[i] != alpha[a])
		{
			i++;
			r++;
		}
		while (l < 4)
		{
			if (map[i] == alpha[a] && alpha[a] != basetetri && map[i - r] == '.')
			{
				while (map[i] && l < 4) /*notre compteur de lettre d'un tetri qui evite d'aller jusquau bout de map*/
				{
					if (map[i] == alpha[a] && map[i - r] == '.')
					{
<<<<<<< HEAD
						map[i - r] == alpha[a];
						l++;
=======
						tetri_base_map(r - 1);
					
					/*	if (a == nbt && basetetri soit le plus a droite possible dans base_tetri)//si on l'appelle de algo_map et que r-1 ne peux pas se realiser renvoie null et donc adjustmap (m + 1)
							adjust_map(m + 1);
						if (!(basetetri est le plus a droite possible))
							base_tetri(r - 1);//on decale donc le tetri de base un cran a droite et ensuite il faut rappeler algo_map
						base_tetri(a + 1)
					*/
>>>>>>> f8befb694e5785b4449c18a99b48e06625d8092f
					}
					if (map[i] == alpha[a] && map[i - r] != '.' )
						algo_map(r - 1);
					i++;
				}
				if ((i - r) > c)//on check apres qu'on a place le tetri pour savoir si on a pas depasse la map
				{
					if (!(a == nbt && basetetri soit le plus a droite possible dans base_tetri))//si on l'appelle de algo_map et que r-1 ne peux pas se realiser renvoie null et donc adjustmap (m + 1)
						base_tetri(r - 1);//on decale donc le tetri de base un cran a droite et ensuite il faut rappeler algo_map
					adjust_map(m + 1);
				}
			}
		}
		i = 0;
		r = 0;
		a++;
	}
	return (map);
}















taille adjust_map * taille adjust_map + nb '\n'

nb obtimal et donc de depart : rc(4 * nbtetri) 



14h30 monte signature
