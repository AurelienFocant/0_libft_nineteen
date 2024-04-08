#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		*((char *) b++) = (unsigned char) c;
	return (b);
}
