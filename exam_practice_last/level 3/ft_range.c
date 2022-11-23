#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int start, int end)
{
	int	*tmp_array;
	int len;

	if(start > end)
		len = start - end;
	else
		len = end - start;
	tmp_array = malloc(sizeof(int) * len + 1);
	if (!tmp_array)
	return(0);
	while (len >= 0)
	{
		tmp_array[len] = end;
		if (start > end)
			end++;
		else
			end--;
		len--;
	}
	return(tmp_array);

}
int	main(void)
{
	int *range;

	printf("Warn: Don't forget to check that the array is of the correct size manually ! Can't know size of `malloc` arrays\n");
	printf("Warn: Any segfault will mean that arrays are not correctly allocated\n");

	range = ft_range(0, 5);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
	free(range);
	
	range = ft_range(3, 3);
	free(range);
	
	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d, %d", range[0], range[1]);
	printf("-1, 0 : %d, %d", ft_range(-1, 1));

	free(range);
}