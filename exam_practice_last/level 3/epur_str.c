#include<unistd.h>

int	is_space(char c)
{
	if(c == 32 || (c >= 9 && c <= 13))
		return(1);
	return(0);
}

int	main(int ac, char **av)
{
	int	flag;
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (is_space(av[1][i]))
			i++;
		while (av[1][i])
		{
			if (is_space(av[1][i]))
				flag = 1;
			if (!is_space(av[1][i]))
			{
				if(flag)
					write(1, " ", 1);
				flag = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}