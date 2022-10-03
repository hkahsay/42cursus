/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:39:43 by hkahsay           #+#    #+#             */
/*   Updated: 2022/10/03 19:50:30 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<string.h>
#include<stdarg.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void	insert_begnning(t_node **tail, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		print_error();
	new_node->x = value;
	new_node->prev = NULL;
	new_node->next = *tail;
	if (*tail != NULL)
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
	new_node_end->next = NULL;
	new_node_end->prev = *head;
	(*head)->next = new_node_end;
	*head = new_node_end;
}

void	remove_node(t_node *node)
{
	if (node->prev != NULL)
		node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	free (node);
	node = NULL;
}

void	init_node(t_node **tail, t_node **head, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		print_error();
	new_node->x = value;
	new_node->next = NULL;
	new_node->prev = NULL;
	*tail = new_node;
	*head = new_node;
}

int	main(void)
{
	t_node	*tail;
	t_node	*head;
	t_node	*curr;

	tail = NULL;
	head = NULL;
	//tail->prev = NULL;
	//tail->next = NULL;
	init_node(&tail, &head, 1);
	insert_begnning(&tail, 5);
	insert_begnning(&tail, 6);
	remove_node(tail->next);
	curr = head;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->prev;
	}
	return (0);
}
