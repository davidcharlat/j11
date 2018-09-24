#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*addr_next;
	t_list	*to_free;
	
	to_free = *begin_list;
	*begin_list = NULL;
	addr_next = to_free->next;
	free ((void*)to_free);
	while ((void*)addr_next != NULL)
	{
		to_free = addr_next;
		addr_next = addr_next->next;
		(*to_free).next = NULL;
		free ((void*)to_free);
	}
}

