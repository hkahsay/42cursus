#ifndef FT_LIST_FOREACH_H
# define FT_LIST_FOREACH_H

typedef struct s_list
{
	struct  s_list *next;
	void	*data;	
	
}		t_list;
#endif