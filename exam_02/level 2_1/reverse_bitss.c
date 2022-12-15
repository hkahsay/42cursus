unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	rev_bits;
	int	i = 8;

	while (i >= 0)
	{
		rev_bits = rev_bits * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return(rev_bits);
}