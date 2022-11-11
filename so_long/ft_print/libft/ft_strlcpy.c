/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:40:09 by hkahsay           #+#    #+#             */
/*   Updated: 2021/11/22 14:50:09 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize > 0)
	{
		while ((src[i] != '\0') && (i < (destsize - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}

/*int	main()
{
	char c[] = "Hello there, Venus";
	char b[40]= "Hello there, Venus";
	int	r;

	//ft_strlcpy(b, c, 7);
	printf("%zu\n", ft_strlcpy(b, c, 4));
		printf("%zu\n", strlcpy(b, c, 4));


	//printf ("%s \n", ft_strlcpy(&c),ft_strlcpy(&b));
	//printf("Length of string %lu \n",strlcpy(b));
	return (0);
}*/
