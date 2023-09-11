#include <stdlib.h>

int	ft_ultimate_range(int	**range, int min, int max)
{
	int	*p;
	int	i;

	i = 0;
	if (min >= max)
	{
		p = NULL;
		return (0);
	}
	if (!(p = malloc(sizeof(int) * (max - min))))
		return (-1);
	if (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	*range = p;
	return (i);
}
