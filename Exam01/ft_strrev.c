#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i]!= '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i= 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return(str);
}

#include <stdio.h>
int main()
{
	char str1[] = "abcdeg";
	printf("Original String : %s\n", str1);
	printf("Reversed String : %s\n", ft_strrev(str1));

	return 0;
}
