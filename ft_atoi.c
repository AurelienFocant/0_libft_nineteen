#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	neg_flag;

	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	neg_flag = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		neg_flag = -1;
		str++;
	}
	n = 0;
	while (ft_isdigit(*str))
		n = (n * 10) + (*str++ - '0');
	return (n * neg_flag);
}
