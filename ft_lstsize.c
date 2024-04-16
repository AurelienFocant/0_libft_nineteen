#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;
	t_list *tmp;

	if (!lst)
		return (0);
	count = 0;
	tmp = lst;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
