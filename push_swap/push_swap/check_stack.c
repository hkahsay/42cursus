/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:11:12 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/03 20:11:09 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include<string.h>
// #include<stdarg.h>
// #include<stdio.h>
// #include<unistd.h>

void	print_error(void)
{
	ft_putstr("Error\n");
	return ;
}

int	check_only_number(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (!ft_isdigit(argv[i][j]))
			return (0);
		while (ft_isdigit(argv[i][j]))
			j++;
		i++;
	}
	return (0);
}

// int	check_doubles(t_stack *a, int x)
// {
	
// }


