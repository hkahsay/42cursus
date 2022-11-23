#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
int	main()
{
	char s[6] = "hello";
	ft_putstr(s);
}