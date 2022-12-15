#include<unistd.h>

int	ft_atoi(char *str)
{
	int	nb = 0;
	int	sign = 1;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = sign * -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		nb = nb * 10 + *str++ - '0';
	return(nb * sign);	
}

void	ft_putcha(char c)
{
	write(1, &c, 1);
}

void	ft_print_nb(int nb)
{
	if (nb == (-2147483648))
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_print_nb(nb * -1);
	}
	else if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		ft_print_nb(nb / 10);
		ft_print_nb(nb % 10);
	}
}

int	is_prime(int nb)
{
	int	i = 2;

	if (nb <= 1)
		return(0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return(0);
		i++;
	}
	return(1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	a = ft_atoi(av[1]);
		int	sum = 0;

		while (a > 0)
		{
			if (is_prime(a) == 1)
			{
				sum = sum + a;
				a--;
			}
		}
		ft_print_nb(sum);
	}
	write(1, "\n", 1);
	return(0);
}