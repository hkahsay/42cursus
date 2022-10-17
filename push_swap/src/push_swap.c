/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:56:14 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/17 15:51:33 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../push_swap.h"

void	push_swap(t_stack *stack)
{
	if (is_sorted(stack) == 1)
		exit(0);
	else if (stack->a_len_box == 2)
		sort_2(stack);
	else if (stack->a_len_box == 3)
		sort_3(stack);
	else if (stack->a_len_box == 4)
		sort_4(stack);
	else if (stack->a_len_box == 5)
		sort_5(stack);
	else
		radix(stack);
}

void	simplify(t_stack *stack)
{
	t_node	*temp_a;
	t_node	*temp_b;
	int		i;

	copy_sort_to_b(stack);
	temp_b = stack->b_tail;
	i = 0;
	while (temp_b != NULL)
	{
		temp_a = stack->a_tail;
		while (temp_a != NULL)
		{
			if (temp_b->x == temp_a->num)
			{
				temp_a->x = i;
				i++;
				break ;
			}
			temp_a = temp_a->next;
		}
		temp_b = temp_b->next;
	}
	deallocate(&stack->b_tail, &stack->b_head);
}

void	copy_sort_to_b(t_stack *stack)
{
	int		i;
	int		j;
	t_node	*temp;

	i = stack->a_len_box + 1;
	copy_to_stack_b(stack);
	while (i > 0)
	{
		temp = stack->b_tail;
		while (temp->next != NULL)
		{
			j = 0;
			if (temp->x > temp->next->x)
			{
				j = temp->x;
				temp->x = temp->next->x;
				temp->next->x = j;
				printf("stackb %d\n\n", temp->x);
			}
			temp = temp->next;
		}
		printf("stacka %d\n", temp->x);
		i--;
	}
}

void	copy_to_stack_b(t_stack *stack)
{
	t_node	*curr;

	curr = stack->a_tail->next;
	init_node(&stack->b_head, &stack->b_tail, stack->a_tail->x);
	while (curr != NULL)
	{
		insert_end(&stack->b_head, curr->x);
		curr = curr->next;
	}
}
