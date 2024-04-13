#include "libft.h"
#include <stdio.h>

int main()
{
	char *s = "  hey  you  mfer";
	char c = ' ';
	char **strs;
	
	strs = ft_split(s, c);
	while (*strs)
		printf("%s\n", *strs++);
	//printf("%i\n", ft_itoa(472));
}
