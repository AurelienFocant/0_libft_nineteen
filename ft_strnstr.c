#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	if (*needle == '\0')
		return ((char *) haystack);
	i = 0;
	while (len-- && haystack[i])
	{
		j = 0;
		while (haystack[i++] == needle[j++])
			if (!needle[j])
				return ((char *) haystack + i - j);
	}
	return (NULL);
}
