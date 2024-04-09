#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
void	bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t		ft_strlen(const char *s);
char *		ft_strchr(const char *s, int c);

#endif
