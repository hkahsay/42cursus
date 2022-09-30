/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:08:58 by hkahsay           #+#    #+#             */
/*   Updated: 2022/09/30 16:23:13 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// # include"libft.h"
// # include"ft_printf.h"
// # include"get_next_line.h"
// # include<limits.h>
# include<string.h>
# include<stdarg.h>
# include<stdio.h>
# include<unistd.h>

typedef struct s_pslst
{
	int				x;
	struct s_pslst	*next;
	struct s_pslst	*prev;
}t_pslst;

typedef struct s_stack
{
	t_pslst	*head;
	t_pslst	*end;
	int		top;
}t_stack;
void	ft_putchar(char c);
void	ft_putstr(char const *s);
int		ft_isdigit(int c);
#endif