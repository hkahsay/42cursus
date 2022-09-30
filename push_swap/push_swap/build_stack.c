/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:11:12 by hkahsay           #+#    #+#             */
/*   Updated: 2022/09/30 16:36:24 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<string.h>
#include<stdarg.h>
#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	while (s != NULL && *s)
		ft_putchar(*s++);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

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
		// if (argv[i][j] == "-")
		// 	j++;
		if (!ft_isdigit(argv[i][j]))
			return (0);
		while (ft_isdigit(argv[i][j]))
			j++;
		if (argv[i][j])
			return (0);
		i++;
	}
	return (0);
}

int	main(void)
{
	int		ag;
	char	*av;

	ag = 2;
	av = "1 2 3 4";
	printf("%d\n", check_only_number(ag, &av));
	return (0);
}
