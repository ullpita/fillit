char			*ft_add_tetri_map(char **tab, char *map)
{
	int		i;
	int		j;
	int		m;
	
	i = 0;
	m = 22000
	//ne pas oublier de rajouter un 0 dans un dernier tab[i] dans le split 
	while (tab[i])
		i++;
	while (i >= 0)
	{
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
	}
	return (map);
}
