/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:20:52 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/17 16:38:25 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = NULL;
	if (argc >= 2)
	{
		stack = init_stack(stack);
		parsing(stack, argv, argc);
		check_doubles(stack);
		// simplify(stack);
		// push_swap(stack);
		// free_sorted_stack(stack);
		while (stack->a_tail)
		{
			printf("print list : [%d]\n", stack->a_tail->x);
			stack->a_tail = stack->a_tail->next;
		}
	}
	else
		return (0);
	return (0);
}

t_stack	*init_stack(t_stack *stack)
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

//check_arg ..split argument

void	parsing(t_stack *stack, char **argv, int argc)
{
	int		i;
	char	**digit;

	i = 0;
	while (argv[++i])
	{
		if (argc == 2)
		{
			digit = ft_split(argv[i], ' ');
			fill_stack(stack, digit);
		}
		else
		{
			if (i == 1)
				init_node(&stack->a_head, &stack->a_tail,
					check_only_number(argv[i]));
			else
				stack = put_in_stack(stack, check_only_number(argv[i]));
		}
	}
}

void	fill_stack(t_stack *stack, char **digit)
{
	int	i;
	int	j;

	j = -1;
	i = 0;
	while (digit[++j])
	{
		if (j == 0)
		{
			init_node(&stack->a_head,
				&stack->a_tail, check_only_number(digit[j]));
		}
		else
			stack = put_in_stack(stack, check_only_number(digit[j]));
	}
	while (digit[i])
	{
		free(digit[i]);
		i++;
	}
	free(digit);
}

t_stack	*put_in_stack(t_stack *stack, int value)
{
	insert_end(&stack->a_head, value);
	stack->a_len_box++;
	return (stack);
}
