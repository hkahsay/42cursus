#include<stdio.h>
#include<stdlib.h>

unsigned int    pgcd(unsigned int a, unsigned int b)
{
	int i;

	i = a;
	while (i > 0)
	{
		if (a % i == 0 && b % i == 0)
			return(i);
		i--;
	}
	return(0);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", pgcd(atoi(av[1]), atoi(av[2])));
		
	}
	printf("\n");
	return(0);
}