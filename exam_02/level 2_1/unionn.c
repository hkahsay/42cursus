#include<unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	char	tab[128];

	if (ac == 3)
	{
		i = 0;
		while(i < 128)
		{
			tab[i] = 0;
			i++;
		}
		i = 1;
		while (i < 3)
		{
			j = 0;
			while (av[i][j])
			{
				if(i == 1 && !tab[(unsigned char)av[i][j]])
				{
					tab[(unsigned char)av[i][j]] = 1;
					write(1, &av[i][j], 1);
				}
				if(i == 2 && !tab[(unsigned char)av[i][j]])
				{
					write(1, &av[i][j], 1);
					tab[(unsigned char)av[i][j]] = 2;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}