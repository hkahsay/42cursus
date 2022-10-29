#include<stdio.h>
#include <string.h>

/*char	*ft_strrev(char *str)
{
	int		j;
	int		i;
	char	*temp;

	i = 0;
	//temp = str;
	while(str[i])
	{
		i++;
	}
	j = 0;
	i = i - 1;
	while (str[i - 1] > str[j])
	{
		//write(1, str[i], 1);
		i--;
	}
	return (str);
}
*/


char	*ft_strrev(char *str)
{
	int	i;
	int	count;
	char temp;

	count = 0;
	while(str[count])
		count++;
	i = -1;
	while(i++ < --count)
	{
		printf("%d\n", i);
		printf("%d\n", count);
		temp = str[i];
		str[i]= str[count];
		str[count] = temp;
	
	}
	return(str);
}

/*char *ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	len = 0;
	while (str[len])
		len++;
	i = -1;
	while (++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return (str);
}*/


int	main(void)
{
	char str[10] = "hermon";

	printf("%s\n", ft_strrev(str));
	return (0);
}