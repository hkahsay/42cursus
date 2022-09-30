/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:00:16 by hkahsay           #+#    #+#             */
/*   Updated: 2021/11/26 14:22:25 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	while (((str[i] != '\0') && (str[i] == '\t')) || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r')
		|| (str[i] == ' '))
		i++;
	if (str[i] && str[i] == '-')
	{
		sign = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	nb = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + ((int)str[i++] - 48);
	if (sign == 1)
		return (-nb);
	return (nb);
}
