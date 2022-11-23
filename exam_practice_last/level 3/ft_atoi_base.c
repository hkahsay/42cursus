#include<unistd.h>
#include<stdio.h>


// char	to_lower(char c)
// {
// 	if (c >= 'A' && c <= 'Z')
// 		return (c + ('a' - 'A'));
// 	return (c);
// }
int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return(1);
	return(0);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return(c + 32);
	return(c);
}

int	get_digit(char c, int digit_in_base)
{
	int	max_digit;

	if (digit_in_base <= 10)
		max_digit = digit_in_base + '0';
	else
		max_digit = digit_in_base - 10 + 'a';
	if (c >= '0' && c<= '9' && c <= max_digit)
		return(c - '0');
	else if( c >= 'a' && c <= 'f' && c <= max_digit)
		return(10 + c - 'a');
	else
		return(-1);	
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res = 0;
	int	sign = 1;
	int	digit;

	if(*str == '-')
	{
		sign = -1;
		str++;
	}
	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		res = res * str_base + (digit * sign);
		str++;
	}
	return(res);
}

int main()
 {
	printf("%d\n", ft_atoi_base("1f", 16));
	return 0;
 }

