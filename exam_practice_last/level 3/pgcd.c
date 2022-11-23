/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:31:44 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/17 11:06:34 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return(1);
	return(0);
}

int	ft_atoi(char *str)
{
	long long nb;
	int sign;

	sign = 1;
	nb = 0;
	while (is_space(*str));
		str++;
	if(*str == '-')
	{
		sign = sign * -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb= nb * 10 + *str - 48;
		str++;
	}
	return((int)nb * sign);
}

int	pgcd(unsigned int n1, unsigned int n2)
{
	int	i;

	i = n1;
	while (i > 0)
	{
		if (n1 % i == 0 && n2 % i == 0)
			return(i);
		i--;
	}
	return(1);
}
int	main(int ac, char **av)
{
	int	n1;
	int	n2;
	
	if (ac == 3)
		printf("%d\n", pgcd(ft_atoi(av[1]), ft_atoi(av[2])));
	printf("\n");
	return(0);
}