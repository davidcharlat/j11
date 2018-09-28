#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

void	shorten_too_long_fct(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*temp[2];
	
	temp[0] = (*begin_list);
	if (!cmp((*begin_list)->data, data_ref))
	{
		*begin_list = (*begin_list)->next;
		free (temp[0]);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else if ((*begin_list)->next)
	{
		while (temp[0] && temp[0]->next)
		{
			if (!cmp(temp[0]->next->data, data_ref))
			{
				temp[1] = temp[0]->next->next;
				free (temp[0]->next);
				temp[0]->next = temp[1];
			}
			else 
				temp[0] = temp[0]->next;
		}
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (*begin_list)
		shorten_too_long_fct (begin_list, data_ref, cmp);	
}
