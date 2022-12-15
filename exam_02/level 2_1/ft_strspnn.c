#include<string.h>
#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return((char *)s);
		s++;
	}
	return(0);
	
}
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (!ft_strchr(accept, s[i]))
			break;
		i++;
	}
	return(i);	
}

int	main()
{
	char	*str = "helo";
	char *reg = "hebci";
	printf("%lu\n", ft_strspn(str, reg));
	printf("%lu\n", strspn(str, reg));
	//printf("%lu\n", ft_strcspn(str, reg));
	return(0);


}