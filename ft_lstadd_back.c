#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ptr_last;

	if (!lst || !new)
		return;
	ptr_last = ft_lstlast(*lst);
	ptr_last->next = new;
}
