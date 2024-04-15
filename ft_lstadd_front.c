#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *ptr;

	if (!lst || !new)
		return;
	ptr = *lst;
	new->next = ptr;
	ptr = new;
}
