#include<stdio.h>
#include<string.h>

char	*ft_strrev(char *str)
{
	int		i;
	int 	len;
	char	temp;

	
	i = 0;
	len = 0;
	while (str[len])
		len++;
	len--;
	while (i < len)
	{
		
		temp = str[len];
		str[len] = str[i];
		str[i] = temp;
		i++;
		len--;
	}

	return(str);
	
}
int	main()
{
	// char	s[10] = "worldhello";
	 char	s2[5] = "hello";

	//printf("%lu\n", strspn("hello", "aelbc"));
	printf("%s\n", ft_strrev(s2));
}