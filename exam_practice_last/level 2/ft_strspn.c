/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:10:14 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/15 17:32:21 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if(*s == c)
			return ((char *)s);
		s++;
	}
	return(0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if(!ft_strchr(accept, s[i]))
		{
			break;
		}
		i++;
	}
	
	return(i);
}

int	main()
{
	// char	s[10] = "worldhello";
	// char	s2[10] = "hello";

	printf("%lu\n", strspn("hello", "aelbc"));
	printf("%lu\n", ft_strspn("hello", "aelbc"));

	
}