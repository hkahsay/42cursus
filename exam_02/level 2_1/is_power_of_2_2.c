#include<stdio.h>

int	    is_power_of_2(unsigned int n)
{
	while (n > 0)
	{
		if (n % 2 == 0)
		{
			return(1);
			n = n / 2;
		}
		else
		{
			return(0);
		}
	}
	return(0);
}
int	main()
{
	int	nb = 4;

	printf("%d\n", is_power_of_2(nb));
	printf("%d\n", is_power_of_2(31));
	printf("%d\n", is_power_of_2(64));
	printf("%d\n", is_power_of_2(8));
	printf("%d\n", is_power_of_2(14));
	printf("%d\n", is_power_of_2(65));
	printf("%d\n", is_power_of_2(6));
	return(0);
}