#include<unistd.h>

int	ft_issapce(int i)
{
	if (i == ' ' || i == '\t'
		|| i == '\v' || i == '\f')
		return(1);
	return(0);
	
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] && ft_issapce(*av[1]))
			av[1]++;
		while (*av[1] && !ft_issapce(*av[1]))
		{
			write(1, av[1], 1);
			av[1]++;
		}		
	}
	write(1, "\n", 1);
	return(0);
}
//not sure 