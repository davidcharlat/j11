#include "ft_list.h"

t_list	*ft_create_elem (void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *ptr;
	t_list *addr_next;
	
	ptr = ft_create_elem (data);
	addr_next = *begin_list;
	while (addr_next->next)
		addr_next = addr_next->next;
	if (ptr)
		addr_next->next = ptr;
}

