#include "libft.h"
#include <stdio.h>



int main()
{
	int n = 5;
	t_list *lst;
	lst = ft_lstnew(&n);
	printf("%i\n", *((int *) (lst->content)));

	t_list new1;
	int n1 = 8;
	new1.content = &n1;
	ft_lstadd_front(&lst, &new1);
	printf("%i\n", *((int *) (lst->content)));

	t_list *ptr;
	ptr = lst;
	while (ptr)
	{
		printf("%i\n", *((int *) (ptr->content)));
		ptr = ptr->next;
	}
	printf("%i\n", ft_lstsize(lst));
}
