#include<stdlib.h>
#include<stdio.h>

int ft_strlen(char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	return(i);
	
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	dst = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if(!dst)
		return(NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
	
	
}

//  int	main(void)
//  {
// 	char src[] = "hermon";
// 	char	*dst;

// 	dst = ft_strdup(src);
// 	printf("%s\n", dst);
//  }
