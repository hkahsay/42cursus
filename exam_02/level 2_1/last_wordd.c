#include<unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
			av[1]++;
		av[1]--;
		while (*av[1] && (*av[1] == 32 || (*av[1] >= 9 && *av[1] <= 13)))
			av[1]--;
		while (av[1] && !(*av[1] == 32 || (*av[1] >= 9 && *av[1] <= 13)))
			av[1]--;
		av[1]++;
		while (*av[1])
		{
			write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return(0);
}