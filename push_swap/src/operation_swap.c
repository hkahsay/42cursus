/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:02:01 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/14 15:37:46 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *stack)
{
	int		i;
	int		j;
	t_node	*temp;	

	temp = NULL;
	if ((stack->a_tail) && stack->a_tail->next)
	{
		temp = stack->a_tail;
		i = stack->a_tail->x;
		j = stack->a_tail->next->x;
		stack->a_tail->x = j;
		stack->a_tail->next->x = i;
	}
	write (1, "sa\n", 3);
}

void	sb(t_stack *stack)
{
	int		i;
	int		j;
	t_node	*temp;	

	temp = NULL;
	if ((stack->b_tail) && stack->b_tail->next)
	{
		temp = stack->b_tail;
		i = stack->b_tail->x;
		j = stack->b_tail->next->x;
		stack->b_tail->x = j;
		stack->b_tail->next->x = i;
	}
	write (1, "sb\n", 3);
}

void	ss(t_stack *stack)
{
	int		i;
	int		j;
	t_node	*temp;	

	temp = NULL;
	if (stack->a_tail && stack->a_tail->next)
	{
		temp = stack->a_tail;
		i = stack->a_tail->x;
		j = stack->a_tail->next->x;
		stack->a_tail->x = j;
		stack->a_tail->next->x = i;
	}
	temp = NULL;
	if (stack->b_tail && stack->b_tail->next)
	{
		temp = stack->b_tail;
		i = stack->b_tail->x;
		j = stack->b_tail->next->x;
		stack->b_tail->x = j;
		stack->b_tail->next->x = i;
	}
	write (1, "ss\n", 3);
}
