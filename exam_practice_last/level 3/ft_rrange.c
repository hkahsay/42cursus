#include<stdlib.h>
#include<stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*t_range;
	int len;
	
	if (end >= start)
		len = end - start;
	else
		len =  start - end;
	t_range = (int *)malloc(sizeof(int) * len + 1);
	if (!t_range)
		return(0);
	while (len--)
	{
		t_range[len] = (end >= start)? start++: start--;
	}
	return(t_range);
}


int	main(void)
{
	int *range;

	printf("Warn: Don't forget to check that the array is of the correct size manually ! Can't know size of `malloc` arrays\n");
	printf("Warn: Any segfault will mean that arrays are not correctly allocated\n");

	range = ft_rrange(0, 5);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
	free(range);
	
	range = ft_rrange(3, 3);
	free(range);
	
	range = ft_rrange(-1, 1);
	printf("-1, 0 : %d, %d", range[1], range[-1]);
	free(range);
}