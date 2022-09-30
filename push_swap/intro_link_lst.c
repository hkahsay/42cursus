#include<stdio.h>
#include<stdlib.h>

typedef struct t_node
{
	int	x;
	struct t_node *next;
	
}t_node;

int	main()
{
	t_node root,elem3;
	root.x = 12;
	root.next = malloc(sizeof(t_node));
	root.next->x = 32;
	root.next->next = &elem3;
	root.next->next->x = 14;
	root.next->next->next = NULL;
	printf("%d\n", root.x);
	printf("%d\n", root.next->x);
	printf("%d\n", root.next->next->x);
	free (root.next);
	return (0);
}