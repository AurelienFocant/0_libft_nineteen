#include "libft.h"

void	bzero(void *s, size_t n)
{
	while (n--)
		*((char *) s++) = 0;
	return;
}
