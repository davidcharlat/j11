#include "ft_list.h"

void	switch_data (void **data1, void **data2)
{
	void	*temp;
	
	temp = *data1;
	*data1 = *data2;
	*data2 = temp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		i[2];
	int		size;
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
			if (cmp(list_cursor->data, list_cursor->next->data) > 0)
				switch_data (&(list_cursor->data), &(list_cursor->next->data));
			list_cursor = list_cursor->next;
		}
	}
}
