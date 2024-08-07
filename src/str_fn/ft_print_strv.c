#include "libft.h"

void	ft_print_strv(char **strv)
{
	while (*strv)
	{
		ft_printf("%s\n", *strv);
		strv++;
	}
}
