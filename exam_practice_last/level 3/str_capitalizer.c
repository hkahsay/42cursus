/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:07:44 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/17 10:28:39 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	is_space(char c)
{
	if(c == 32 || (c >= 9 && c <= 13) || (c == '\0'))
		return(1);
	return(0);
}

void	str_capi(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if((str[i] >= 'a' && str[i] <= 'z') && (is_space(str[i - 1])))
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
	
}
int	main(int ac, char **av)
{
	int	i;
	
	i = 0;
	if (ac > 1)
	{
		while (i < ac)
		{
			str_capi(av[i]);
			write(1, "\n", 1);
			i++;
		}
		
	}
	write(1, "\n", 1);
	return(0);
}