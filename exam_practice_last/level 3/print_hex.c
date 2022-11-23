#include<unistd.h>
int	ft_atoi(char *str)
{
	int	nb;

	while (*str)
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	return(nb);
}

void	print(int hex)
{
	char	str_hex[17] = "0123456789abcdef";

	if (hex >= 16)
		print(hex / 16);
	write(1, &str_hex[hex % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print(ft_atoi(av[1]));
	write(1, "\n", 1);
	return(0);
}