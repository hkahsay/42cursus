#include<unistd.h>

void	ft_putstr(char *s1)
{
	while (*s1)
	{
		write(1, s1, 1);
		s1++;

	}
}
int	main(int ac, char **av)
{
	int	i;
	int j;
	//(void)ac;
	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (av[1][i] && av[2][j])
		{
			if (av[1][i] == av[2][j])
			{
				// write(1, &av[1][i], 1);
				i++;
			}
			j++;
		}
		if (av[1][i] == '\0')
		{
			//ft_putstr(av[1]);
		}
	}
	return(0);
}