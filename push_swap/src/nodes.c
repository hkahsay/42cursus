/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:39:43 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/14 16:32:30 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_node(t_node **tail, t_node **head, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		print_error();
	new_node->x = value;
	new_node->num = value;
	new_node->next = NULL;
	new_node->prev = NULL;
	*head = new_node;
	*tail = new_node;
}

void	insert_begnning(t_node **tail, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		print_error();
	new_node->x = value;
	new_node->num = value;
	new_node->prev = NULL;
	new_node->next = *tail;
	(*tail)->prev = new_node;
	*tail = new_node;
}

void	insert_end(t_node **head, int value)
{
	t_node	*new_node_end;

	new_node_end = malloc(sizeof(t_node));
	if (new_node_end == NULL)
		print_error();
	new_node_end->x = value;
	new_node_end->num = value;
	new_node_end->next = NULL;
	new_node_end->prev = *head;
	(*head)->next = new_node_end;
	*head = new_node_end;
}

void	remove_node(t_node *node)
{
	if (node->prev != NULL)
	{
		node->prev->next = node->next;
	}
	if (node->next != NULL)
	{
		node->next->prev = node->prev;
	}
	free (node);
	node = NULL;
}

// int	main(void)
// {
// 	t_node	*tail;
// 	t_node	*head;
// 	t_node	*curr;
// 	t_stack	*stack;

// 	tail = NULL;
// 	head = NULL;  
// 	//tail->prev = NULL;
// 	//tail->next = NULL;
// 	init_node(&tail, &head, 1);
// 	insert_end(&head, 4);
// 	insert_begnning(&tail, 5);
// 	insert_begnning(&tail, 6);
// 	insert_begnning(&tail, 2);
// 	insert_begnning(&tail, 7);
// 	insert_begnning(&tail, 9);
// 	//pa(stack);
// 	curr = tail;
// 	while (curr != NULL)
// 	{
// 		printf("%d\n", curr->x);
// 		curr = curr->next;
// 	}
// 	return (0);
// }

// int	main(int argc, char **argv)
// {
// 	t_stack	*stack;

// 	stack = NULL;
// 	if (argc >= 2)
// 	{
// 		stack = ft_init(stack);
// 		check_doubles(stack);
// 		pa(stack);
// 	}
// 	else
// 		return (0);
// 	return (0);
// }
