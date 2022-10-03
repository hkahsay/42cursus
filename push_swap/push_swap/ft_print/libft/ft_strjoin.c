/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:57:54 by hkahsay           #+#    #+#             */
/*   Updated: 2021/11/27 15:08:46 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dst;

	if (!s1)
		return (0);
	dst = (char *)malloc(sizeof(*s1)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dst)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		dst[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		dst[j++] = s2[i];
		i++;
	}
	dst[j] = '\0';
	return (dst);
}
