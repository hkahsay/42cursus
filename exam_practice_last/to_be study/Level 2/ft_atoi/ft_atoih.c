#include<stdio.h>

int	is_space(char c)
{
	if(c == 32 || (c >= 9 && c <= 13))
		return(1);
	return(0);
}

int	ft_atoi(const char *str)
{
	long	nb;
	int	sign = 1;

	while (is_space(*str))
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

int	main(void)
{
	int	nb;
	char	str[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";
	nb = ft_atoi(str);
	printf("%d\n", nb);
}