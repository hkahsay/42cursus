#include<stdio.h>

int	ft_atoi(const char *str)
{
	long	nb;
	int	sign;

	
	// while(str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
	// 	|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
	// 	i++;
	while(*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if(*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - 48;
		str++;
	}
	return(sign * (int)nb);
}		

int	main(void)
{
	int	nb;
	char	str[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";
	nb = ft_atoi(str);
	printf("%d\n", nb);
}