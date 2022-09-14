/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inte_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:19:03 by hkahsay           #+#    #+#             */
/*   Updated: 2022/09/14 11:43:25 by hkahsay          ###   ########.fr       */
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
		i = 2;
		while (i > 0)
		{
			j = 0;
			while (argv[i][j])
			{
				if (i == 2 && !table[(unsigned char)argv[i][j]])
					table[(unsigned char)argv[i][j]] = 1;
				else if (i == 1 && table[(unsigned char)argv[i][j]])
				{
					write (1, &argv[i][j], 1);
					table[(unsigned char)argv[i][j]] = 2;
				}
				j++;
			}
		i--;			
		}	
	}
	write (1, "\n", 1);
	return (0);
}