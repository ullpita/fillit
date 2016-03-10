#include "fillit.h"

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