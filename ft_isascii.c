#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 00 && c <= 0177)
		return (c);
	return (0);
}
