#include<string.h>
#include<stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	j;

	if (!s1 || !s2)
	{
		return (0);
	}
	
	while (*s1)
	{
		j = 0;
		while (s2[j])
		{
			if(*s1 == s2[j])
				return((char *) s1);
			j++;
		}
		s1++;
	}
	return(0);
}

int	main()
{
	// char	s[10] = "worldhello";
	// char	s2[10] = "hello";

	printf("brk: %s\n", ft_strpbrk("hello", "labc"));
	printf("brk: %s\n", strpbrk("hello", "labc"));

	
}