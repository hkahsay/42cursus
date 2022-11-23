#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	nb;

	while(*str)
		nb = nb * 10 + *str++ - '0';
	return(nb);
}

void	ft_print_positive(int nb)
{
	if (nb > 9)
		ft_print_positive(nb / 10);
	ft_putchar(nb % 10 + '0');
} 

void	tab_mult(int n)
{
	int	i;

	i = 1;
	while (i < 10)
	{
		ft_print_positive(i);
		write(1, " * ", 3);
		ft_print_positive(n);
		write(1, " = ", 3);
		ft_print_positive(i * n);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		tab_mult(ft_atoi(av[1]));
	else
		write(1, "\n", 1);
	return(0);
}