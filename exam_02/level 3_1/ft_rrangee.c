#include<stdio.h>
#include<stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*tmp;
	int	len;

	if (start > end)
		len = start - end;
	else
		len = end - start;
	if(!(tmp = (int *)malloc(sizeof(int) * len + 1)))
		return(0);
	while (len >= 0)
	{
		tmp[len] = start;
		if (start >= end)
			start--;
		start++;
		len--;
	}
	return(tmp);
}

int	main()
{
	int *arrayt;
	int len;

	arrayt = ft_rrange(4, 8);
	len = 4;
	while (len >= 0)
	{
		printf("%d\n", arrayt[len]);
		len--;
	}
	return(0);
}