#include<unistd.h>

int	rrepeat(char c)
{
	int	repeat;
	if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	repeat;

		while (*av[1])
		{
			repeat = rrepeat(*av[1]);
			while (repeat--)
				write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return(0);
}