#include "fillit.h"
#include <stdio.h>

//on avance dans le tableau et au fur et a mesure les # dans tab[0] = A... tab[3] = D.

char	**ft_alphamino(char **tab)
{
	int		i;
	int		j;
	char	alpha;

	i = 0;
	alpha = 'A';
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
				tab[i][j] = alpha;
			j++;
		}
		i++;
		alpha++;
	}
	return (tab); 
}

int	main(int argc, char **argv)
{
	char **tab;
	char	*str;
	char	str1;
	int	i;

	i = 0;
	str = ft_read_arg(argc, argv, i);
	tab = ft_strsplit(str, '\n');
	while (i < 26)
	{
		tab = ft_alphamino(tab);
		printf("%s\n",tab[i]);
		i++;
	}
	return (0);
}
