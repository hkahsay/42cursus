/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:02:23 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/29 17:48:02 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	table[128];
	int		i;
	int		j;
	
	if (argc == 3)
	{
		i = 0;
		while (i < 128)
		{
			table[i] = 0;
			i++;
		}
		i = 2;	 	
		// printf(("%c\n", argv[0][0]));
		while (i > 0)
		{
			j = 0;
			while (argv[i][j])
			{
				if (i == 2 && !table[(unsigned char)argv[i][j]])
				{
					table[ (unsigned char)argv[i][j] ] = 1;
				}
				if (i == 1 && table[(unsigned char) argv[i][j]] == 1)
				{
					write(1, &argv[i][j], 1);
					table[(unsigned char)argv[i][j]] = 2;
				}	
				//printf("%d\n", table[(unsigned char)argv[i][j]]);
			j++;
			}
		i--;
		}
	}
	write(1, "\n", 1);
	return (0);	
}