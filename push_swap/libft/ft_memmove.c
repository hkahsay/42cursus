/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:43:55 by hkahsay           #+#    #+#             */
/*   Updated: 2021/11/25 14:50:51 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
	{
		i = len - 1;
		while (len > 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			len--;
			i--;
		}
	}
	return (dst);
}	
