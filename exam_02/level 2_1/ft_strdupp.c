#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int	ft_strlen(char *s)
{
	int	i = 0;
	while (s[i])
		i++;
	return(i);	
}
// char    *ft_strdup(char *src)
// {
// 	int	i;
// 	int	len;
// 	char *dest;

// 	len = ft_strlen(src);
// 	dest = (char *)malloc(sizeof(char) * len + 1);
// 	if (!dest)
// 		return(0);
// 	i = 0;
// 	len = 0;
// 	while (src[i])
// 	{
// 		dest[len] = src[i];
// 		i++;
// 		len++;
// 	}
// 	dest[len] = '\0';
// 	return(dest);
// }
char    *ft_strdup(char *src)
{
	int	i;
	char *dest;

	dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dest)
		return(0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
int	main()
{
	char	*str = "hello";
	char *reg;

	reg = ft_strdup(str);
	printf("strcspn: %s\n", reg);
	printf("strspn: %s\n", strdup(str));
	//printf("ft_strcspn: %lu\n", ft_strcspn(str, reg));
	return(0);


}