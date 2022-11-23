/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:14:12 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/17 13:21:48 by hkahsay          ###   ########.fr       */
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
		while (av[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			while (is_space(av[1][i]))
				i--;
			end = i;
			while (av[1][i] && !is_space(av[1][i]))
				i--;
			start = i + 1;
			flg = start;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if (flg)
			{
				write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
