//#define _CRTDBG_MAP_ALLOC
//#include<crtdbg.h>
# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>

# include<stdarg.h>

typedef struct add_lst
{
	int	x;
	struct add_lst *next;
	
}add_lst;

void	insert_end(add_lst **root, int value)
{
	add_lst *new_node = malloc(sizeof(add_lst));
	if(!new_node)
		exit (2);
	new_node->next = NULL;
	new_node->x = value;
	if(*root == NULL)
	{
		*root = new_node;
		return;
	}
	add_lst *curr = *root;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new_node;
}

void	insert_after(add_lst *node, int value)
{
	if(*root == NULL)
		return;
	add_lst *curr = *root;
	while (curr->next != NULL)
	{
		if(curr->next != NULL)
		{
			add_lst *new_node = malloc(sizeof(add_lst));
			curr->next = new_node;
		}
		curr = curr->next;
	}
	
}
void	rem_lst(add_lst **root, int value) 
{
	if(*root == NULL)
		return;
	if ((*root)->x == value)
	{
		add_lst *to_remove = *root;
		*root = (*root)->next;
		free (to_remove);
		return;
	}
	
	add_lst *curr = *root;
	while(curr->next != NULL)
	{
		if (curr->next->x == value)
		{
			add_lst *remv_lst = curr->next;
			curr->next = curr->next->next;
			free (remv_lst);
			return;
		}
	curr = curr->next;
	}
}
void	deallocating(add_lst **root)
{
	add_lst *curr = *root;
	add_lst *dalct;
	while (curr != NULL)
	{
		dalct = curr;
		curr = curr->next;
		free (dalct);
	}
	
}
int	main()
{
	add_lst *root;
	add_lst *curr;
	//root = malloc(sizeof(add_lst));
	// if(!root)
	// 	exit(1);
	root = NULL;
	insert_end(&root, 2);
    insert_end(&root, 5);
    insert_end(&root, 7);
    insert_end(&root, 9);
	insert_after(&root, 3);
	rem_lst(&root, 2);

	 //= malloc(sizeof(add_lst));
	curr = root;
	while(curr!= NULL)
		{
			printf("%d\n", curr->x);
			curr = curr->next;
		}
		deallocating(&root);
		//_CrtDumpMemoryLeaks();
	return (0);
}


