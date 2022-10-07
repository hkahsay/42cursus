/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:20:52 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/07 16:03:15 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_init(t_stack *stack)
{
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->a_len_box = 1;
	stack->b_len_box = 1;
	stack->i = 0;
	stack->max_bites = 0;
	stack->a_head = NULL;
	stack->a_tail = NULL;
	stack->b_head = NULL;
	stack->b_tail = NULL;
	return (stack);
}

t_stack	*put_in_stack(t_stack *stack, int value)
{
	insert_begnning(&stack->a_tail, stack->a_tail->x);
	stack->a_len_box++;
	return (stack);
}

void	split_stack(t_stack *stack, char **digit)
{
	int	i;
	int	j;

	j = -1;
	i = 0;
	while (digit[++j])
	{
		if (j == 0)
		{
			init_node(&stack->a_tail, &stack->a_head,
				check_only_number(digit[j]));
		}
		else
			stack = put_in_stack(stack, check_only_number);
	}
	while (dijit[i])
	{
		free(digit[i]);
		free(digit);
	}	
}

// void	check_arg(t_stack *stack, char **argv, int argc)
// {

// }

// int	main(int	argc, char	**argv)
// {

// }