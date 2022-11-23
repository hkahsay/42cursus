#include<unistd.h>
#include<stdio.h>
 
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
	int	j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[2][j])
			if (av[2][j++] == av[1][i])
				i++;
		if(!av[1][i])
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return(0);
}

// int	main()
// {
// 	char	s[] = "hello";
// 	 puts(s);
// 	 ft_putstr(s);

// }