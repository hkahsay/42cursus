#include<stdio.h>
#include<stdlib.h>

int	ft_atoi(const char *str)
{
	int	nb = 0;
	int	sign = 1;

	while(*str == 32 || (*str >= 9 && *str <= 13))
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

int	main()
{
	char *str = "-123abf";
	int	nbr = ft_atoi(str);
	printf("%d", nbr);
}