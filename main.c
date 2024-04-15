#include "libft.h"
#include <stdio.h>



int main()
{
	int n = 5;
	t_list *lst;
	lst = ft_lstnew(&n);
	//printf("%i\n", *((int *) (lst->content)));

	t_list *new1;
	int n1 = 8;
	new1 = ft_lstnew(&n1);
	ft_lstadd_front(&lst, new1);
	//printf("%i\n", *((int *) (lst->content)));

	t_list *ptr;
	ptr = lst;
	while (ptr)
	{
		printf("%i\n", *((int *) (ptr->content)));
		ptr = ptr->next;
	}
	printf("%i\n", ft_lstsize(lst));

	t_list *last = ft_lstlast(lst);
	printf("%i\n", *((int *) (last->content)));

	t_list *new2;
	int n2 = 13;
	new2 = ft_lstnew(&n2);

	ft_lstadd_back(&lst, new2);
	last = ft_lstlast(lst);
	printf("%i\n", *((int *) (last->content)));


}
