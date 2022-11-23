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
