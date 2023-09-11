int		ft_count_if(char **tab, int lenght, int (*f)(char*))
{
	int		i;
	int		count;

	i = -1;
	count = 0;
	while (++i < lenght)
		if ((*f)(tab[i]) != 0)
			count++;
	return (count);
}

