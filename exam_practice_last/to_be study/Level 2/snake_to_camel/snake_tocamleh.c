#include<unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if(av[1][i] == '_' && av[1][i + 1] >= 'a' && av[1][i + 1] >= 'z')
			{
				av[1][i] = av[1][i] - 32;
				//write(1, &av[1][i], 1);
			}
			write(1, &av[1][i], 1);
			i++;
		}
		
	}
	write(1, "\n", 1);
	return(0);
}