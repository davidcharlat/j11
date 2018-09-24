#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while ((1 < nbr) && (begin_list))
	{
		begin_list = begin_list->next;
		nbr--;
	}
	if (nbr == 1)
		return (begin_list);
	return ((void*)0);
}
