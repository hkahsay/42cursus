#include<stdio.h>
#include<string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return((char *)s1);
			i++;			
		}
		s1++;		
	}
	return(0);
}

int	main(void)
{
	char	s1[7] = "hermon";
	char	s2[7] = "dmonh";

	printf("%s\n", ft_strpbrk(s1, s2));
	printf("%s\n", strpbrk(s1, s2));


}