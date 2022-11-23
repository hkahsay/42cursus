void	fprime(unsigned int n)
{
	unsigned int i;

	if (n == 1)
		printf("%d", n);
	else
	{
		i = 1;
		while (n > 1)
		{
			if (n % ++i == 0)
			{
				printf ("%d", i);
				n /= i;
				if (n > 1)
					printf("*");
				--i;
			}
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2 && *av[1])
		fprime(atoi(av[1]));
	printf("\n");
	return(0);
}