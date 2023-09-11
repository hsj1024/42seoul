#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	mlc_sizecal(int size, char **strs, char *sep)
{
	int	strs_len;
	int sep_len;
	int i;

	strs_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	if (size == 1)
		return (ft_strlen(strs[0]) + 1);
	while (i < size -1)
	{
		strs_len += ft_strlen(strs[i]);
		strs_len += sep_len;
		++i;
	}
	strs_len += ft_strlen(strs[i]);
	return (strs_len + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int t_length;
	int	i;
	char *str;

	if (size == 0)
	{
		str = (char *)malloc(1);
		str[0] = 0;
		return (str);
	}
		t_length= mlc_sizecal(size, strs, sep);
		str = (char *)malloc(t_length * sizeof(char));
		i = 0;
		if (*(str + i) != 0)
			*(str + i) = 0;
		i = 0;
		while (i < (size -1))
		{
			str = ft_strcat(str, *(strs + i));
			str = ft_strcat(str, sep);
			++i;
		}
		str = ft_strcat(str, *(strs + i));
		return (str);
}



