#include<stdio.h>
#include<string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	j = 0;
	while (s1[j])
	{
		i = 0;
		while (s2[i])
		{
			if(s1[j] == s2[i])
				return((char *) &s1[j]);
			i++;
		}
		j++;		
	}
	return(0);
}
int	main()
{
	char	*str = "hello";
	char *reg = "abec";
	printf("strcspn: %s\n", strpbrk(str, reg));
	printf("ft_strpbrk: %s\n", ft_strpbrk(str, reg));
	// printf("ft_strcspn: %lu\n", ft_strcspn(str, reg));
	return(0);


}