#include<unistd.h>

int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return(1);
	return(0);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
			av[1]++;
		av[1]--;
		while (is_space(*av[1]))
			av[1]--;
		while (*av[1])
		{
			write(1, av[1], 1);
			av[1]--;
		}
	}
	write(1, "\n", 1);
	return(0);
}