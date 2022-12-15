int	is_space(char c)
{
	if(c == 32 || (c >= 9 && c <= 13) || (c == '\0'))
		return(1);
	return(0);
}
int main(int ac, char **av)
{
	int	start;
	int end;
	int i;

	if (ac == 2)
	{
		while(av[1][i] != '\0')
			i++;
		while (i >= 0)
		{
			while (is_space(*av[1]))
				i--;
			end = i;
			while (!is_space(*av[1]))
				i--;
			start = i + 1;
			int flg;
			flg = start;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if (flg)
				write(1, " ", 1);
		}
	}
	write(1, " \n", 1);
	return(0);
}