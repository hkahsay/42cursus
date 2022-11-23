/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:24:41 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/17 13:46:47 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13 && c == 0))
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	start;
	int	end;
	int	flg;
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (is_space(av[1][i]))
			i++;
		start = i;
		while (av[1][i] && !is_space(av[1][i]))
			i++;
		end = i;
		while (is_space(av[1][i]))
			i++;
		while (av[1][i])
		{
			flg = 1;
			write(1, &av[1][i], 1);
			i++;
		}
		if (flg == 1)
			write(1, " ", 1);
		while (start < end)
		{
			write(1, &av[1][start], 1);
			start++;
		}
		
	}
	write(1, "\n", 1);
	return (0);
}
