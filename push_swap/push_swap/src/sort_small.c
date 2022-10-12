/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:41:26 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/12 12:45:00 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_2(t_stack *stack)
{
	sa(stack);
	exit(0);
}

void	sort_3(t_stack	*stack)
{
	int	head;
	int	tail;
	int	middle;

	head = stack->a_head->x;
	tail = stack->a_tail->x;
	middle = stack->a_tail->next->x;
	if (tail > middle && head > middle && head > tail)
		sa(stack);
	printf("stack  %d\n", head);
	if (tail > middle && head < tail && middle > head)
	{
		ra(stack);
		sa(stack);
	}
	else if (tail > middle && middle < head && head < tail)
		ra(stack);
	else if (tail < middle && middle > head && head > tail)
	{
		sa(stack);
		ra(stack);
	}
	else if (middle > head && tail < middle && head < tail)
		rra(stack);
}

void	sort_4(t_stack *stack)
{
	while (stack->a_tail->x != 0)
		ra(stack);
	pb(stack);
	sort_3(stack);
	pa(stack);
}

void	if_3_for_5(t_stack *stack)
{
	int	first;
	int	second;
	int	third;

	first = stack->a_tail->x;
	second = stack->a_tail->next->x;
	third = stack->a_tail->next->next->x;
	if (first == 2 && second == 4 && third == 3)
	{
		ra(stack);
		sa(stack);
		rra(stack);
	}
	if (first == 3 && second == 2 && third == 4)
		sa(stack);
	if (first == 3 && second == 4 && third == 2)
		rra(stack);
	if (first == 4 && second == 2 && third == 3)
		ra(stack);
	if (first == 4 && second == 3 && third == 2)
	{
		sa(stack);
		rra(stack);
	}
}

//separate the two smaller values sort remaining three values
void	sort_5(t_stack *stack)

{
	while (stack->a_tail->x == 2 || stack->a_tail->x == 3
		|| stack->a_tail->x == 4)
		ra(stack);
	pb(stack);
	while (stack->a_tail->x == 2 || stack->a_tail->x == 3
		|| stack->a_tail->x == 4)
		ra(stack);
	pb(stack);
	if_3_for_5(stack);
	if (stack->b_tail->x < stack->b_tail->next ->x)
		sb(stack);
	pa(stack);
	pa(stack);
}
