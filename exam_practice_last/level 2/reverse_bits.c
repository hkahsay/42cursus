#include<unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	bits;

	i = 0;
	bits = 0;
	while (i < 8)
	{
		bits = (((octet >> i) & 1) + '0');
		write(1, &bits, 1);
		i++;
	}
	return(bits);	
}

int	main()
{
	reverse_bits(38);
}