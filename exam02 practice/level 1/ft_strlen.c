#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	return(i);
}

// int	main(void)
// {
// 	char	str[] = "hermon";
// 	printf("%d", ft_strlen(str));
// }
