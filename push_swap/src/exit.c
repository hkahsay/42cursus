/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:26:15 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/14 16:40:24 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	deallocate(t_node **tail, t_node **head)
{
	t_node	*curr;

	curr = *tail;
	if (*tail == NULL)
		return ;
	while (curr->next)
	{
		curr = curr->next;
		free(curr->prev);
	}
	free(curr);
	*tail = NULL;
	*head = NULL;
}

void	free_sorted_stack(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->a_tail)
		deallocate(&stack->a_tail, &stack->a_head);
	if (stack->b_tail)
		deallocate(&stack->b_tail, &stack->b_head);
	free(stack);
	stack = NULL;
}
