#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int	a = 5;
	int b = 4;

	
	ft_swap(&a, &b);
	printf("%d\n", a);
}