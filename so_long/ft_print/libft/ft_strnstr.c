/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:34:14 by hkahsay           #+#    #+#             */
/*   Updated: 2021/11/25 16:55:08 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (haystack[i] == needle[j] && needle[j] && i < n)
			{
				i++;
				j++;
			}
			if (j == ft_strlen(needle))
				return ((char *)&haystack[k]);
			i = k;
		}
		i++;
	}
	return (0);
}
