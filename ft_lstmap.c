#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	(void) f;
	(void) del;
	while (lst)
	{
		lst = lst->next;
	}
	return lst;
}
