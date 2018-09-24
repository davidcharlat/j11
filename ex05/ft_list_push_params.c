#include "ft_list.h"

t_list	*ft_create_elem (void *data);

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *list;
	t_list *next;

	if (ac == 0)
		return ((void*)0);
	list = ft_create_elem ((void*)av[--ac]);
	next = list;
	while (ac > 0)
	{
		next->next = ft_create_elem ((void*)av[--ac]);
		next = next->next;
	}
	return (list);
}
