#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;

	// if (!s1 || !s2)
	// 	return(0);
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);
}
int		main(void)
{
	printf("%d\n", ft_strcmp("same","same"));
	printf("%d\n", ft_strcmp("notsame", "nsame"));
	printf("%d\n", strcmp("same", "same"));
	printf("%d\n", strcmp("notsame", "nsame"));
	return (0);
}