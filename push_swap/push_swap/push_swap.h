/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:08:58 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/07 12:51:06 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_print/libft/libft.h"
# include "ft_print/include/ft_printf.h"
// # include"ft_printf.h"
// # include"get_next_line.h"
// # include<limits.h>
# include<string.h>
# include<stdarg.h>
# include<stdio.h>
# include<unistd.h>
# include<stdlib.h>

# define MIN_INT -2147483648
# define MAX_INT 2147483647

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
	int		a_len_box;
	int		b_len_box;
	int		i;
	int		x;
	int		max_bites;
	t_node	*a_tail;
	t_node	*b_tail;
	t_node	*a_head;
	t_node	*b_head;
}t_stack;

//create linked lists (nodes)
void			insert_begnning(t_node **tail, int value);
void			insert_end(t_node **head, int value);
void			remove_node(t_node *node);
void			init_node(t_node **tail, t_node **head, int value);
// void			ft_putstr(char const *s);
void			ft_putchar(char c);
t_stack			*ft_init(t_stack *stack);

//checkers
void			print_error(void);
int				is_sorted(t_stack *stack);
long long int	check_only_number(char *str);
void			check_error(char *str, int i);
void			check_max_min(long long int value, int sign);
int				check_doubles(t_stack *stack);
//operations
void			sa(t_stack *stack);
void			sb(t_stack *stack);
void			ss(t_stack *stack);
void			pa(t_stack *stack);
void			pb(t_stack *stack);
void			ra(t_stack *stack);
void			rb(t_stack *stack);

#endif