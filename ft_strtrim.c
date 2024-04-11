#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	char	*s2;

	i = 0;
	len = 0;
	while (s1[i])
		if (!ft_strchr(set, s1[i++]))
				len++;
	s2 = malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		if (!ft_strchr(set, *s1))
			s2[i++] = *s1;
		s1++;
	}
	s2[i] = '\0';
	return (s2);
}
