#include "ft_list.h"

t_list	*ft_create_elem (void *data);

void	ft_sorted_list_merge
			(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list	*temp;
	
	if (begin_list2 && *begin_list1)
	{
		if (cmp ((*begin_list1)->data, begin_list2->data) > 0)
		{
			temp = begin_list2->next;
			begin_list2->next = *begin_list1;
			*begin_list1 = begin_list2;
			ft_sorted_list_merge(begin_list1, temp, cmp);
		}
		else
			ft_sorted_list_merge(&((*begin_list1)->next), begin_list2, cmp);
	}
	else if (begin_list2)
		{
			temp = begin_list2->next;
			begin_list2->next = *begin_list1;
			*begin_list1 = begin_list2;
			ft_sorted_list_merge(begin_list1, temp, cmp);
		}
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *ptr;
	
	ptr = ft_create_elem (data);
	if (ptr)
		ft_sorted_list_merge(begin_list, ptr, cmp);
}

