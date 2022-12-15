 #include<unistd.h>

int	main(int ac, char **av)
{
	int	start;
	int	end;
	int flg = 0;
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		start = i;
		while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			i++;
		end = i;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			flg = 1;
			write(1, &av[1][i], 1);
			i++;
			
		}
		if (flg == 1)
			write(1, " ", 1);
		while (start < end)
		{
			write(1, &av[1][start], 1);
			start++;
		}
		write(1, "\n", 1);
	return(0);
	}
	
}