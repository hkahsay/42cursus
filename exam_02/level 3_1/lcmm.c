#include<stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	lcm;
	if (a > b)
		lcm = a;
	lcm = b;
	while (1)
	{
		if(lcm % a == 0 && lcm % b == 0)
			return(lcm);
		lcm++;
	}
	return(0);
}
int	main()
{
	unsigned int lcmm = lcm(4, 6);
	printf("%d\n", lcmm);
	return(0);
}