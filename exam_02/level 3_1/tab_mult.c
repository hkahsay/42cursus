#include<unistd.h>

int	ft_atoi(char *str)
{
	int nb = 0;
	int	sign = 1;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if(*str == '-')
	{
		sign *= (-1);
		str++;
	}
	if (*str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
		nb = nb * 10 + *str++ - '0';
	return(nb * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_nb(int nb)
{
	if (nb == (-2147483648))
	{
		write(1, "-2147483648", 11);
		//return;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		print_nb(nb * -1);
	}
	else if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		print_nb(nb / 10);
		print_nb(nb % 10);
	}
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	a;

	if	(ac == 2)
	{
		while (i <= 9)
		{
			a = ft_atoi(av[1]);
			print_nb(i);
			write(1, " x ", 3);
			print_nb(a);
			write(1, " = ", 3);
			print_nb(i * a);
			write(1, "\n", 1);
			i++; 
		}
	}
	write(1, "\n", 1);
	return(0);
}