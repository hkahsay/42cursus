/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:23:30 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/14 16:14:40 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	radix(t_stack *stack)
{
	int	size;
	int	max_num;
	int	j;
	int	tail;

	size = stack->a_len_box;
	max_num = size - 1;
	while ((max_num >> stack->max_bites) != 0)
		stack->max_bites++;
	while (stack->i < stack->max_bites)
	{
		j = 0;
		while (j < size)
		{
			tail = stack->a_tail->x;
			if (((tail >> stack->i) & 1) == 1)
				ra(stack);
			else
				pb(stack);
			j++;
		}
		stack->i++;
		while (stack->b_tail != 0)
			pa(stack);
	}
}
