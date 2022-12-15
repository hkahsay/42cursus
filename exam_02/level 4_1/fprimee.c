#include<stdio.h>
#include<stdlib.h>


int	main(int ac, char **av)
{
	int	nb;
	int	i = 2;

	if (ac == 2)
	{
		nb = atoi(av[1]);
		if (nb == 1)
			printf("%d", i);
		while (i <= nb)
		{
			if(nb % i == 0)
			{
				printf("%d", i);
				if(nb == i)
					break;
				printf("*");
				nb = nb / i;
				i = 2;

			}
			i++;
		}
	}
	printf("\n");
	return(0);
}
