#include<string.h>
#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if(s[i] == c)
			return((char *)s);
		i++;
	}
	return(0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if(ft_strchr(accept, s[i]) == 0)
			break;
		i++;
	}
	return(i);
}

int main()
{
	char s[4] = "lor";
	char a[4] = "abcf";
	printf("%lu\n", ft_strspn(s, a));
	printf("%lu\n", strspn(s, a));

}
	
	