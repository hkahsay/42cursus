#include<stdio.h>
#include<string.h>

char    *ft_strrev(char *str)
{
	int	i;
	int	len;
	char temp;

	len = strlen(str);
	i = -1;
	while (++i < --len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
	}
	return(str);
}
int	main(void)
 {
	char src[] = "hermon";

	printf("%s\n", ft_strrev(src));
	return(0);
 }