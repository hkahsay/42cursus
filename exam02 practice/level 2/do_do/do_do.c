#include"do_do.h"

int	main(int ac, char *av[])
{
	if (ac == 4)
	{
		if(av[2][0] == '+')
			printf("%d", atoi(av[1]) + atoi(av[3]));
		if(av[2][0] == '-')
			printf("%d", atoi(av[1]) - atoi(av[3]));
		if(av[2][0] == '*')
			printf("%d", atoi(av[1]) * atoi(av[3]));
		if(av[2][0] == '/')
			printf("%d", atoi(av[1]) / atoi(av[3]));
		if(av[2][0] == '%')
			printf("%d", atoi(av[1]) % atoi(av[3]));
	}
	write(1, "\n", 1);
	return(0);
}