/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:08:31 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/23 19:00:19 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;
	size_t index;

	j = 0;
	index = (size_t) strlen(s);
	// j = 0;
	// if(!s || !reject)
	// 	return(0);
	while (reject[j])
	{
		i = 0;
		while (s[i])
		{
			if(s[i] == reject[j] && i < index)
			{
				index = i;
			}
				
			i++;
		}
		j++;
	}
	return(index);
}
int	main()
{
	// char	s[10] = "worldhello";
	// char	s2[10] = "hello";

	printf("%lu\n", strcspn("hello", "eabolc"));
	printf("brk: %s\n", strpbrk("hello", "abhc"));
	printf("%lu\n", ft_strcspn("hello", "eabolc"));

	
}