#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 0040 && c <= 0176)
		return (c);
	return (0);
}
