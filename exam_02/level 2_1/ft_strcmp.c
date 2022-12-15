#include<stdio.h>
#include<string.h>


int    ft_strcmp(char *s1, char *s2)
{
	int	i = 0;

	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main()
{
	char s1[] = "a";
	char s2[] = "hermon";

	printf ("%d\n", ft_strcmp(s1, s2));
	printf ("%d\n", strcmp(s1, s2));

}