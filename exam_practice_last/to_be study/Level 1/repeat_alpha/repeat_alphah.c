#include<unistd.h>

int	ft_repeat(char s)
{
	int	repeat;

	if(s >= 'a' && s <= 'z')
		repeat = s - 'a' + 1;
	else if (s >= 'A' && s <= 'Z')
		repeat = s - 'A' + 1;
	else
		repeat = 1;
	return(repeat);
}

int	main(int ac, char **av)
{
	int	repeat;

	if (ac == 2)
	{
		while (*av[1])
		{
			repeat = ft_repeat(*av[1]);
			while(repeat--)
				write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
		return(0);
}