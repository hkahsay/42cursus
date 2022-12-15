#include<unistd.h>

void	print_hex(int nb)
{
	char	str[17] = "0123456789abcdef";

	if(nb >= 16)
		print_hex(nb / 16);
	write(1, &str[nb % 16], 1);
}

int	ft_atoi(char *str)
{
	int	nb = 0;
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

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		print_hex(ft_atoi(av[1]));
		write(1, "\n", 1);
	}
	write(1, "\n", 1);
	return(0);
}