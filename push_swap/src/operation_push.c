/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:41:59 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/14 15:40:02 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *stack)
{
	t_node	*temp;

	temp = stack->b_tail;
	if (stack->b_tail == NULL)
		return ;
	if (stack->a_tail == NULL)
		init_node(&stack->a_head, &stack->a_tail, stack->b_tail->x);
	else
		insert_begnning(&stack->a_tail, stack->b_tail->x);
	stack->b_tail = stack->b_tail->next;
	if (stack->b_tail == NULL)
		stack->b_head = NULL;
	remove_node(temp);
	write (1, "pa\n", 3);
}

void	pb(t_stack *stack)
{
	t_node	*temp;

	temp = stack->a_tail;
	if (stack->a_tail == NULL)
		return ;
	if (stack->b_tail == NULL)
		init_node(&stack->b_head, &stack->b_tail, stack->a_tail->x);
	else
		insert_begnning(&stack->b_tail, stack->a_tail->x);
	stack->a_tail = stack->a_tail->next;
	if (stack->a_tail == NULL)
		stack->a_head = NULL;
	remove_node(temp);
	write (1, "pb\n", 3);
}
