#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *temp;
	
	temp = *begin_list1;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (*begin_list1)
		temp->next = begin_list2;
	else
		*begin_list1 = begin_list2;
}
