#include "libft.h"
#include <stdio.h>

void	ft_print_lst_content(t_list *ptr)
{
	while (ptr)
	{
		printf("%i\n", *((int *) (ptr->content)));
		ptr = ptr->next;
	}
}

void	ft_delete(void *n)
{
	*((int *) n) = 0;
}

void	ft_add_three(void *n)
{
	*(int*) n += 3;
}

void	*ft_return_add_three(void *n)
{
	*(int*) n += 3;
	return (n);
}

int main()
{
	t_list *ptr;
	void (*del)(void *);
	void (*add)(void *);
	void	*(*return_add)(void *);
	del = ft_delete;

	t_list *lst;
	int n = 5;
	lst = ft_lstnew(&n);

	t_list *node1;
	int n1 = 8;
	node1 = ft_lstnew(&n1);
	ft_lstadd_front(&lst, node1);

	t_list *node2;
	int n2 = 13;
	node2 = ft_lstnew(&n2);
	ft_lstadd_back(&lst, node2);

	t_list *node3;
	int n3 = 57;
	node3 = ft_lstnew(&n3);
	ft_lstadd_back(&lst, node3);

	t_list *node0;
	int n4 = 24;
	node0 = ft_lstnew(&n4);
	ft_lstadd_front(&lst, node0);


	ptr = lst;
	ft_print_lst_content(ptr);
	printf("There are %i nodes\n", ft_lstsize(lst));

	printf("\n");
	printf("\n");


	ptr = lst;
	add = ft_add_three;
	ft_lstiter(ptr, add);
	ft_print_lst_content(ptr);
	printf("There are %i nodes\n", ft_lstsize(lst));

	printf("\n");
	printf("\n");

	return_add = ft_return_add_three;
	t_list	*new;
	ptr = lst;
	new = ft_lstmap(ptr, return_add, del);
	ft_print_lst_content(new);
	printf("There are %i nodes\n", ft_lstsize(new));


	ft_lstclear(&lst, del);
	if (lst)
		printf("list still exists");
	else
		printf("list deleted");
}
