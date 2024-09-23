#include "libft.h"

void	ft_free_null_strv(char ***strv)
{
	size_t	i;

	i = 0;
	while ((*strv)[i])
	{
		ft_free_null((void **) *strv + i);
		i++;
	}
	ft_free_null((void **) strv);
}
