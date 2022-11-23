#include<stdio.h>
#include<stdlib.h>

int	ft_len(int nb)
{
	int len;

	len = 0;
	if (nb <= 0)
	{
		nb *= (-1);
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return(len);
}

char	*ft_itoa(int n)
{
	int nb;
	char *str;
	int	i;

	nb = n;
	i = ft_len(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return(0);
	str[i--] = '\0';
	if(nb == 0)
		str[i] = '0';
	if (nb < 0)
	{
		nb = nb * (-1);
		str[0] = '-';
	}
	while (nb > 0)
	{
		str[i] = nb % 10 + 48;
		nb /= 10;
		i--;
	}
	return(str);
}

int main()
{
	int n = 65;
	char *str = ft_itoa(n);
	//printf("%d\n", ft_len(n));
	printf("%s", str);


}