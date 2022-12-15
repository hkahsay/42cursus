#include<unistd.h>

void	fizzbuzz(int n)
{
	char	s[10] = "0123456789";

	if (n > 9)
		fizzbuzz(n / 10);
	write(1, &s[n % 10], 1);
}

int main()
{
	int	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fissbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			fizzbuzz(i);
		i++;
		write(1, "\n", 1);
	}
	
}