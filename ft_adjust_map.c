char			ft_adjust_map(char *map , int m = 1 /*nb de tetri pour savoir la map minimum, mais apres ce n'est plus en rapport avec le nb de tetri*/, int c = 1)
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
	}
	return (map);
}