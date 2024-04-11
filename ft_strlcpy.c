#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	len;
	int	i;

	len = 0;
	if (dstsize == 0)
		return (len);
	while (str[len])
		len++;
	i = 0;
	while (src[i] && i < dstsize - 1)
		dst[i] = src[i++];
	dst(dstsize) = '\0';
	return (len);
}
