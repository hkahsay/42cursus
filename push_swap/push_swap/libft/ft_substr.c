/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:35:39 by hkahsay           #+#    #+#             */
/*   Updated: 2021/12/06 17:21:31 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	if (!s)
		return (0);
	if (start > ((unsigned int)ft_strlen(s)))
		return (ft_strdup(""));
	i = ft_strlen(s) - start;
	if (len > i)
		len = i;
	else if (len < i)
		i = len;
	else if (i < 0)
		i = 0;
	dst = (char *)malloc(sizeof(*s) * (len + 1));
	if (!dst)
		return (0);
	ft_strlcpy(dst, s + start, i + 1);
	return (dst);
}
