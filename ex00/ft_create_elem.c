#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem (void *data)
{
	t_list	*ptr;
	
	ptr = (t_list*)malloc(sizeof(t_list));
	if (ptr)
	{
		ptr->data = data;
		ptr->next = NULL;
	}
	return (ptr);	
}
