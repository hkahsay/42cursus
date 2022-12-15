#include<unistd.h>

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
	else if(nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		print_nb(nb / 10);
		print_nb(nb % 10);
	}
}

int	main(int ac, char **av)
{
	av = 0;
	print_nb(ac - 1);
	write(1, "\n", 1);
	return(0);
}