#include<stdio.h>
#include<string.h>

int	ft_strlen(const char *s)
{
	int	i = 0;

	while (s[i])
		i++;
	return(i);
}
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;
	size_t	index;

	index = (size_t)ft_strlen(s);
	if (!s || !reject)
		return(0);
	j = 0;	
	while (reject[j])
	{
		i = 0;
		while (s[i])
		{
			if(s[i] == reject[j] && i < index)
				index = i;
			i++;
		}
		j++;
	}
	return(index);
}

int	main()
{
	char	*str = "hello";
	char *reg = "elico";
	printf("strcspn: %lu\n", strcspn(str, reg));
	printf("strspn: %lu\n", strspn(str, reg));
	printf("ft_strcspn: %lu\n", ft_strcspn(str, reg));
	return(0);


}