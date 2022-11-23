/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:57:26 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/16 18:55:25 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == (-2147483648))
	{
		write(1,"-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}	
}

int	ft_atoi(char *str)
{
	int nb;
	int	sign;
	
	
	sign = 1;
	nb = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	return((int)nb * sign);	
}

int	is_prime(int nb)
{
	int	i;
	
	i = 2;
	if (nb <= 1)
		return(0);
	while (i <= nb / 2)
	{
		if ((!(nb % i)))
			return(0);
		else
			i++;		
	}
	return(1);
}

int main(int ac, char **av)
{
	int	sum;
	int nb;

	sum = 0;
	nb = ft_atoi(av[1]);
	if (ac == 2)
	{
		
		while (nb > 0)
		{
			if (is_prime(nb--))
			{
				sum += nb + 1;
				//nb--;
			}
		}
		ft_putnbr(sum);		
	}
	write(1, "\n", 1);
	return(0);
}