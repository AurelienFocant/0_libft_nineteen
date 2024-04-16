#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*head;

	if (!lst)
		return;
	head = *lst;
	while (head)
	{
		tmp = (head)->next;
		ft_lstdelone(head, del);
		head = tmp;
	}
	*lst = NULL;
}
