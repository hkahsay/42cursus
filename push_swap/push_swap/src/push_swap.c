/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:56:14 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/12 13:16:39 by hkahsay          ###   ########.fr       */
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


