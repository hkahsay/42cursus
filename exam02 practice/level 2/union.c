/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:52:39 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/18 12:36:51 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdarg.h>
#include<stdio.h>

int	main(int argc, char **argv)
{
	char	table[128];
	int		i;
	int		j;
	
	//our argument must be two if not we display newline
	if (argc == 3)
	{
		//chane all ascci number in to zero to make sure every spell have value 1 
		i = 0;
		while (i < 128)
		{
			table[i] = 0;
			i++;
		}
		i = 1;
		while (i < 3)
		{
			j = 0;
			while (argv[i][j])
			{
				//we check for each argument if its zero make it one and write it down
				if (i == 1 && !table[(unsigned char)argv[i][j]])
				{
					table[(unsigned char)argv[i][j]] = 1;
					write(1, &argv[i][j], 1);
				}
				if(i == 2 && !table[(unsigned char)argv[i][j]])
				{
					write(1, &argv[i][j], 1);
					table[(unsigned char)argv[i][j]] = 2;
				}
			j++;
			}
		i++;	
		}
	}
	write(1, "\n", 1);
	 return (0); 	
}
