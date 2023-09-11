int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		++i;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	char	*tmp;
	int		i;

	i = -1;
	while (tab[++i])
	{
		if (tab[i + 1] && ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
	}
}
