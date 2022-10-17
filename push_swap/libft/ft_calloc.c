/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:21:52 by hkahsay           #+#    #+#             */
/*   Updated: 2021/12/06 10:49:34 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	co_size;

	ptr = (void *)malloc(count * size);
	co_size = count * size;
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, co_size);
	return (ptr);
}
