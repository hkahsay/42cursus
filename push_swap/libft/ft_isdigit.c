/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:39:43 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/13 14:51:39 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
#include <stdio.h>*/

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*int	main()
{
	int x;

	x = 6;
	printf ("%d", ft_isdigit(x));
}*/
// if ((x >= '0') && (x <= '9'))
	// 	return (1);
	// else
	// 	return (0);