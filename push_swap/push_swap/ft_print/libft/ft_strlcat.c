/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:39:55 by hkahsay           #+#    #+#             */
/*   Updated: 2021/12/13 12:45:29 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
static char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	else
		ft_strncat(dst, src, dstsize - dstlen - 1);
	return (dstlen + srclen);
}

/*size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dest;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (destsize > 0)
	{
		while (dest[i])
			i++;
		j = 0;
		while ((src[j]) && (i + j < (destsize - 1)))
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	if (len_dest >= destsize)
		len_dest = destsize;
	return (len_dest + len_src);
}*/
/*int	main()
{
	char c[] = "Hello there, Venus";
	char b[40]= "hdarg";


	//ft_strlcat(b, c, 7);
	printf("%zu\n", ft_strlcat(b, c, 4));
	printf("%zu\n", strlcat(b, c, 4));

	//printf ("%s \n", ft_strlcpy(&c),ft_strlcpy(&b));
	//printf("Length of string %lu \n",strlcpy(b));
	return (0);
}*/
