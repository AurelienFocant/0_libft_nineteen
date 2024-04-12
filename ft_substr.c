#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	if (!len || !s || start > ft_strlen(s))
		return (ft_strdup(""));
	s2 = malloc(sizeof(char) * (len - start));	
	i = 0;
	while (s[start] && len--)
		s2[i++] = s[start++];
	s2[i] = '\0';
	return (s2);
}
