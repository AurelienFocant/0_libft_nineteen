#include "libft.h"

static int	ft_is_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	else
		return (0);
}

static unsigned int	ft_count_strs(const char *s, char c)
{
	unsigned int	count;

	count = 0;
	while (*s)
	{
		while (ft_is_sep(*s, c) && *s)
			s++;
		if (!ft_is_sep(*s, c) && *s)
		{
			count++;	
			while (!ft_is_sep(*s, c) && *s)
				s++;
		}
	}	
	return (count);
}

static unsigned int	ft_len_strsep(const char *s, char c)
{
	unsigned int	len;

	len = 0;
	while (!ft_is_sep(*s, c) && *s)
	{
		len++;	
		s++;
	}
	return (len);

}

char	**ft_split(char const *s, char c)
{
	unsigned int	strs_count;
	char		**split_s;
	unsigned int	i;

	strs_count = ft_count_strs(s, c);	
	split_s = malloc((strs_count + 1) * sizeof(char *));
	if (!split_s)
		return (NULL);
	split_s[strs_count] = 0;
	i = 0;
	while (i < strs_count)
	{
		while (ft_is_sep(*s, c) && *s)
			s++;
		if (!ft_is_sep(*s, c) && *s)
		{
			split_s[i++] = ft_substr(s, 0, ft_len_strsep(s, c));
			while (!ft_is_sep(*s, c) && *s)
				s++;
		}
	}
	return (split_s);
}
