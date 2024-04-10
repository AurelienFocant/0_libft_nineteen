#include "libft.h"
#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*((char *) s++) = 0;
	return;
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
