#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	int		i[2];
	int		size;
	void	*temp;
	t_list	*list_cursor;

	list_cursor = *begin_list;
	i[0] = 1;
	size = 0;
	while (list_cursor)
	{
		list_cursor = list_cursor->next;
		size++;
	}
	while (i[0] < size)
	{
		i[1] = i[0]++;
		list_cursor = *begin_list;
		while (i[1]++ < size)
		{
			temp = list_cursor->data;
			list_cursor->data = list_cursor->next->data;
			list_cursor->next->data = temp;
			list_cursor = list_cursor->next;
		}
	}
}
