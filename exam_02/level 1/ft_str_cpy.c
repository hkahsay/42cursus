#include<string.h>
#include<stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

// int main()
// {
// 	char	s1[] = "helo";
// 	char	s2[] = "hermon";

// 	printf("%s\n", ft_strcpy(s1, s2));
// 	strcpy(s1, s2);
// 	printf("%s\n", s1);

// }

int main(void)
{
	char str1[] = "Flavio";
	char str2[] = "Gaucho";

	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	strcpy(str1, str2);
	printf("%s\n", str1);
	return (0);
}