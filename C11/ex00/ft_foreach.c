
void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int i;

	i = -1;
	while (++i < lenght)
		(*f)(tab[i]);
}

