/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:29:04 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/05 16:51:49 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ra(t_stack *stack)
{
	t_node	*temp;

	temp = stack->a_tail;
	insert_end(&stack->a_head, stack->a_tail->x);
	stack->a_tail = stack->a_tail->next;
	remove_node(temp);
	write (1, "ra\n", 3);
}

void	rb(t_stack *stack)
{
	t_node	*temp;

	temp = stack->b_tail;
	insert_end(&stack->b_head, stack->b_tail->x);
	stack->b_tail = stack->b_tail->next;
	remove_node(temp);
	write (1, "ra\n", 3);
}

void	rr(t_stack *stack)
{
	t_node	*temp;

	temp = stack->a_tail;
	insert_end(&stack->a_head, stack->a_tail->x);
	stack->a_tail = stack->a_tail->next;
	remove_node(temp);
	temp = stack->b_tail;
	insert_end(&stack->b_head, stack->b_tail->x);
	stack->b_tail = stack->b_tail->next;
	remove_node(temp);
	write (1, "rr\n", 3);
}
