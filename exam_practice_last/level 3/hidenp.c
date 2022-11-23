/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:38:57 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/17 11:45:44 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][i] && av[2][j])
		{
			if (av[2][j] == av[1][i])
				i++;
			j++;
		}
		if(av[1][i] == '\0')
			write (1, "1", 1);
		write(1, "0", 1);		
	}
	write(1, "\n", 1);		
	return(0);
}