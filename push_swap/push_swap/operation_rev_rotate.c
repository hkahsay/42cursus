/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rev_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:52:05 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/05 17:16:34 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rra(t_stack *stack)
{
	insert_begnning(&stack->a_tail, stack->a_head->x);
	stack->a_head = stack->a_head->prev;
	write (1, "rra\n", 4);
}

void	rrb(t_stack *stack)
{
	insert_begnning(&stack->b_tail, stack->b_head->x);
	stack->b_head = stack->b_head->prev;
	write (1, "rrb\n", 4);
}

void	rrr(t_stack *stack)
{
	insert_begnning(&stack->a_tail, stack->a_head->x);
	stack->a_head = stack->a_head->prev;
	insert_begnning(&stack->b_tail, stack->b_head->x);
	stack->b_head = stack->b_head->prev;
	write (1, "rrr\n", 4);
}
