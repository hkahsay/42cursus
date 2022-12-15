#include<stdlib.h>
#include<stdio.h>

int     *ft_range(int start, int end)
{
	int	*my_array;
	int	len;

	if(start > end)
		len = start - end;
	else
		len = end - start;
	my_array = (int *)malloc(sizeof(int) * len + 1);
	if(!my_array)
		return(0);
	while (len >= 0)
	{
		my_array[len] = end;
		if (start > end)
			end++;
		end--;
		len--;
	}
	return(my_array);	
}

int        main(void)
{
    int *nums;
    int i;

    nums = ft_range(-6, -3);
    i = 0;
    while (i < 4)
    {
        printf("%d\n", nums[i]);
        i++;
    }
    return (0);
}