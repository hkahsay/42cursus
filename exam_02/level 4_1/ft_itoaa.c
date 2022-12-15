#include<stdio.h>
#include<stdlib.h>

int	ft_count(int n)
{
	int	len = 0;
	if(n <= 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return(len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	int	nb;

	nb = n;
	len = ft_count(n);
	if(!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return(0);
	str[len--] = '\0';
	if(nb == 0)
		str[len] = '0';
	if (nb < 0)
	{
		nb = nb * (-1);
		str[0] = '-';
	}
	while (nb > 0)
	{
		str[len] = nb % 10 + 48;
		nb /= 10;
		len--;
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