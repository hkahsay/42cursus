/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:08:58 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/03 18:58:01 by hkahsay          ###   ########.fr       */
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
# include<stdlib.h>

typedef struct s_node
{
	int				x;
	int				num;
	int				i;
	struct s_node	*next;
	struct s_node	*prev;
}t_node;

typedef struct s_stack
{
	int		a_len;
	int		b_len;
	t_node	*a_tail;
	t_node	*b_tail;
	t_node	*a_head;
	t_node	*b_head;
}t_stack;

void	ft_putchar(char c);
void	ft_putstr(char const *s);
int		ft_isdigit(int c);
void	insert_begnning(t_node **tail, int value);
void	insert_end(t_node **head, int value);
void	remove_node(t_node *node);
void	init_node(t_node **tail, t_node **head, int value);

void	print_error(void);

#endif