#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

typedef struct t_node
{
	int x; 
	struct t_node *next;
	struct t_node *prev;
}t_node;

void beg_insert(t_node **t_tail, int value)
	{
		t_node *new_node = malloc(sizeof(t_node));
		if(!new_node)
		{
			exit(1);
			return;
		}
		new_node->x = value;
		new_node->prev = NULL;
		new_node->next = *t_tail;
		if (*t_tail != NULL)
			(*t_tail)->prev  = new_node;
		*t_tail = new_node;
	}
void	init(t_node **head, t_node **tail, int value)
{
	t_node *new_node = malloc(sizeof(t_node));
	if(!new_node)
	{
		exit(2);
		return;
	}
	new_node->x = value;
	new_node->prev = NULL;
	new_node->next = NULL; 
	*tail = new_node;
	*head = new_node;

}
int	main()
{
	// t_node *t_tail = malloc(sizeof(t_node));
	// if (!t_tail)
	// 	return (0);
		t_node *t_tail = NULL;
		t_node *t_head = t_tail;
		init(&t_tail, &t_head, 7);
	 //t_tail->x = 7;
	//  t_tail->prev = NULL; 
	//  t_tail->next = NULL;
	 beg_insert(&t_tail, 3);
	// t_tail->next = malloc(sizeof(t_node));
	// t_tail->next->x = 12;
	// if (!t_tail->next)
	// 	return (0);
	//t_tail->next->next = NULL;
	// t_node *tail = malloc(sizeof(t_node));
	// t_head->x = 12;
	// t_head->prev = malloc(sizeof(t_node));
	// t_head->prev->x = 3;
	 
	// write(1, "\n\n",2);
	t_node *t_curr = t_head;
	while(t_curr != NULL)
	{
		printf("%d\n", t_curr->x);
		t_curr = t_curr->prev;

	}
	// printf("%d\n", t_tail->x);
    // printf("%d\n", t_tail->next->x);
	// printf("%d\n", t_head->x);
    // printf("%d\n", t_head->prev->x);
	return (0);




} 
