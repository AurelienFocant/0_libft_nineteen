#include "libft.h"
#include <stdio.h>

static char uppercut(unsigned int i, char c)
{
	(void) i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main()
{
	char *str = "hello bande de cons";
	char *s;

	char (*f)(unsigned int, char);
	f = uppercut;

	s = ft_strmapi(str, f);

	printf("%s\n", s);

}
