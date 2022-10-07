/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:26:15 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/05 19:27:43 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	print_error(void)
{
	ft_putstr("Error\n");
	return ;
}

int	is_sorted(t_stack *stack)
{
	t_node	*curr;

	curr = stack->a_tail;
	while (curr->next)
	{
		if (curr->x < curr->next->x)
			curr = curr->next;
		else
			return (0);
	}
	return (1);
}

void	deallocate(t_node **tail, t_node **head)
{
	t_node	*curr;

	if (tail == NULL)
		return ;
	curr = *tail;
	while (curr->next != NULL)
	{
		curr = curr->next;
		free (curr->prev);
	}
	free (curr);
	*tail = NULL;
	*head = NULL;
}

void	free_stack_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->a_tail)
		deallocate(&stack->a_tail, &stack->a_head);
	if (stack->b_tail)
		deallocate(&stack->b_tail, &stack->b_head);
	free (stack);
	stack = NULL;
}
