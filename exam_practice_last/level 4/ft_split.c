#include<stdlib.h>

int	is_space(char c)
{
	if(c == 32 || (c >= 9 && c <= 13))
		return(1);
	return(0);
}

int	split_size(char *s)
{
	unsigned int	len;


	len = 0;
	while (*s)
	{
		if(is_space(*s))
			++s;
		else
		{
			++len;
			while(*s && !is_space(*s))
				++s;
		}
	}
	return(len);
}

char	**ft_split(char *s)
{
	int	i = 0;
	int	j = 0;
	int	k;
	int	w_len = 0;
	char	**split;

	split = (char **)malloc(sizeof(char *) * (split_size(s) + 1));
	if(!split)
		return(0);
	while (s[i] & j < split_size(s))
	{
		while (s[i] && is_space(s))
			i++;
		while (s[i] && !is_space(s))
		{
			w_len++;
			i++;
		}
		split[j] = (char *)malloc(sizeof(char) * (w_len + 1));
		if(!s[j])
			return(0);
		k = 0;
		while (w_len)
			split[j][k++] = s[i - w_len--];
		split[j++][k] = '\0';		
	}
	ret	(split);
}