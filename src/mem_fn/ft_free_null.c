#include "libft.h"

void	ft_free_null(void **ptr)
{
	free(*ptr);
	*ptr = NULL;
}
