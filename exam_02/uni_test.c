/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uni_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:45:57 by hkahsay           #+#    #+#             */
/*   Updated: 2022/09/14 12:12:36 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdarg.h>

int	main(int argc, char **argv)
{
	char	table[128];
	int		i;
	int		j;
	
	if (argc == 3)
	{
		i = 0;
		while (table[i])
			table[i++] = 0;
		i = 1;
		while (i < 3)
		{
			j = 0;
			while (argv[i][j])
		{
			if (i == 1 && !table[(unsigned char)argv[i][j]])
			{
				table[(unsigned char)argv[i][j]] = 1;
				write (1, &argv[i][j], 1);
			}
			else if (i == 2 && !table[(unsigned char)argv[i][j]])
			{
				table[(unsigned char)argv[i][j]] = 1;
				write (1, &argv[i][j], 1);
			}
		j++;	
		}
		i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}