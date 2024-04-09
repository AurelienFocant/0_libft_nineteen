#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	i = 0;
	while (len--)
	{
		if (dst < src)
		{
			*((char *) (dst + i)) = *((char *) (src + i));
			i++;
		}
		else
			*((char *) (dst + len)) = *((char *) (src + len));
	}
	return (dst);
}
