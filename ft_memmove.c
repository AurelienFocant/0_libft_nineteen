#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	i = 0;
	while (len--)
	{
		if (dst > src)
		{
			*((char *) (dst + i)) = *((char *) (src + i));
			i++;
		}
		else
			*((char *) (dst + len)) = *((char *) (src + len));
	}
	return (dst);
}

#include <stdio.h>

int main()
{
	int buf[] = {1, 2, 3, 4, 5};
	int n = 3;

	ft_memmove(buf+1, buf, n);
	for (int i = 0; i < 5; i++)
	{
		printf("%i, ", buf[i]);
	}	
}

