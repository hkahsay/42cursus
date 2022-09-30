/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:54:48 by hkahsay           #+#    #+#             */
/*   Updated: 2022/09/27 15:35:08 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

typedef struct t_node
{
	int				x;
	struct t_node	*next;
}t_node;

void	insert_end(t_node **root, int value)
{
	t_node	*new_list = malloc(sizeof(t_node));
	if (!new_list)
		exit(2);
	new_list->next = 0;
	new_list->x = value;
	if (*root == NULL)
	{
		*root = new_list;
		return;
	}
	t_node *curr = *root;
	while (curr->next != 0)
		curr = curr->next;
	curr->next = new_list;
	
}
int	main(void)
{
	t_node	*root;
	t_node	 *curr; //elem2,

	//root = malloc(sizeof(t_node));
	root = NULL;
	
	// root.next = &elem2;
	// elem2.x = 24;
	// root.next ->next = malloc(sizeof(t_node));
	// root.next->next->x = 50;
	// root.next->next->next = NULL;
	insert_end(&root, 3);
	curr = root;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	//free (root.next->next);
	//printf("%d\n", root.x);
	// printf("%d\n", root.next->x); //	(root.next.x = elem2.x); both are the same to access the elem2 link
	// printf("%d\n", root.next->next->x);
	return (0);
}
