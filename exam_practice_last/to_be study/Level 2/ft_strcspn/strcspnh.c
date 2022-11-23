#include<string.h>
#include<stdio.h>

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

	j = 0;
	index = (size_t)ft_strlen(s);
	while (reject[j])
	{
		i = 0;
		while (s[i])
		{
			if (s[i] == reject[j] && j < index)
				index = i;
			i++;
		}
		j++;
	}
	return(index);
}

int	main()
{
	// char	s[10] = "worldhello";
	// char	s2[10] = "hello";

	printf("%lu\n", strspn("hello", "eabolc"));
	printf("%lu\n", strcspn("hello", "aebolc"));
	//printf("%s\n", strpbrk("hello", "abolc"));
	//printf("brk: %s\n", strpbrk("hello", "abhc"));
	printf("%lu\n", ft_strcspn("hello", "eabolc"));

	
}