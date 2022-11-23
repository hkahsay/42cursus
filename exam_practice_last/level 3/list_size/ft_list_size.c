#include"ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;
	
	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return(i);
}
int	main()
{
	t_list	*bg_list;

	bg_list[] = {2,4,5,6};
	//bg_list->next = 0;
	ft_list_size(bg_list);

}