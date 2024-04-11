#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;
	int		i;

	len = ft_strlen(s1);
	s2 = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
