#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*joined;
	int		i;
	
	total_len = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(char) * (total_len + 1));
	if (joined == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		joined[i++] = *s1++;
	while (*s2)	
		joined[i++] = *s2++;
	joined[i] = '\0';
	return (joined);	
}
