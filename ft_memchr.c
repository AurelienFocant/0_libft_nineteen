#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;
	char *str;
	
	str = (char *) s;
	i = 0;
	while (n--)
	{
		if (str[i] == (unsigned char) c)
			return ((void *) s + i);
		i++;
	}
	return (NULL);
}
