/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:11:12 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/11 15:31:41 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
// #include<string.h>
// #include<stdarg.h>
// #include<stdio.h>
// #include<unistd.h>

long long int	check_only_number(char *str)
{
	int				i;
	int				sign;
	long long int	value;

	value = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		check_error(str, i);
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0 || ft_strlen(str) > 12)
			print_error();
		value *= 10;
		value += str[i] - '0';
		i++;
	}
	check_max_min(value, sign);
	return (value * sign);
}

void	check_error(char *str, int i)
{
	if (ft_isdigit(str[i + 1]) == 0)
		print_error();
}

void	check_max_min(long long int value, int sign)
{
	if (((value * sign) > MAX_INT) || ((value * sign) < MIN_INT))
		print_error();
}

int	check_doubles(t_stack *stack)
{
	t_node	*dup;
	t_node	*temp;

	dup = stack->a_tail;
	while (dup && dup->next)
	{
		temp = dup->next;
		while (temp != NULL)
		{
			if (dup->x == temp->x)
				print_error();
			temp = temp->next;
		}
	dup = dup->next;
	}
	return (0);
}
