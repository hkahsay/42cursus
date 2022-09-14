/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:11:49 by hkahsay           #+#    #+#             */
/*   Updated: 2022/09/13 14:00:30 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.

// The display will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Examples:

// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $

int	main(int argc, char **argv)
{
	char	table[128]; //ascii table base 10 to access all the character (127 character)
	int	 	i; //to access the two strings
	int		j; //to access the index
	
	if (argc == 3)
	{
		i = 0;
		while (i < 128)
			table[i++] = 0;  //at the begnning we initialize into zero for all character
		i = 1;
		while (i < 3)
		{
			j = 0;
			while (argv[i][j])
			{
				if (!table[(unsigned char)argv[i][j]]) //when our argv of our table has no value or equal to 0 b/c we intialaize all to zero
				{
					table[(unsigned char)argv[i][j]] = 1; // now we change each character which we get for the first time we change in to 1
					write(1, &argv[i][j], 1); //we write all chara we get in above
				}
				j++;
			}
		i++;	
		}	
	}
	write (1, "\n", 1);
	return (0);
	
}

