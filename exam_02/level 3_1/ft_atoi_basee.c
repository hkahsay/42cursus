#include<stdio.h>

int	valid_nb(char c, int base)
{
	char str1[17] = "0123456789abcdef";
	char str2[17] = "0123456789ABCDEF";

	while (base--)
	{
		if (str1[base] == c || str2[base] == c)
			return(1);		
	}
	return(0);
}

int	value(char c)
{
	if (c >= '0' && c <= '9')
		return(c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	else
		return(-1);
}

int	ft_atoi_base(const char *str, int str_base)
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
	while (valid_nb(*str, str_base))
		nb = nb * str_base + value(*str++);
	return(nb * sign);	
}

int	main()
{
	printf("%d\n", ft_atoi_base("12z", 16));
	return(0);
}