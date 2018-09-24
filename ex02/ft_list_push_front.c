#include "ft_list.h"

t_list	*ft_create_elem (void *data);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *ptr;
	
	ptr = ft_create_elem (data);
	if (ptr)
	{
		ptr->next = *begin_list;
		*begin_list = ptr;
	}
}

