#include "libft.h"
#include <stdio.h>

int main()
{
	int n = 5;
	t_list *ptr;
	ptr = ft_lstnew(&n);
	printf("%i\n", *((int *) (ptr->content)));
}
