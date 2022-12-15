#include<stdio.h>

int		max(int* tab, unsigned int len)
{
	int	max;
	unsigned int	i = 0;

	while (i < len)
	{
		tab[0] = max;
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return(max);		
}

int	main()
{
	int	tab[3] = {3, 4, 2};
	printf("%d\n", max(tab, 3));
	return(0);

}