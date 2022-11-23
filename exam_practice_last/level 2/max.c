#include<stdio.h>

int	max(int *tab, unsigned int len)
{
	int	max;
	unsigned int	i;

	i = 0;
	max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
		
		i++;
	}
	return(max);
}

int main(void)
{
	int a[] = {7, 5, 2, 13, 45, 8,9};
	int	max1 = max(a, 7);
	printf("%d\n", max1);
	return(0);
}