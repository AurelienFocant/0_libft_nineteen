#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	else if (c >= 'a' && c <= 'z')
		return (c);
	return (0);
}
