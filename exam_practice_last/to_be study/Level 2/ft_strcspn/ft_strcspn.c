#include <stdio.h>
#include<string.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     j = 0;

    while (s[i] != '\0')
    {
		j = 0;
        while (reject[j] != '\0')
        {
            if(s[i] == reject[j] && )
                return (i);
            j++;
        }
        i++;
    }
    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

int	main()
{
	// char	s[10] = "worldhello";
	// char	s2[10] = "hello";

	printf("%lu\n", strcspn("hello", "labc"));
	printf("%lu\n", ft_strcspn("hello", "labch"));

	
}