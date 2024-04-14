CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

LIB_NAME = libft.a

LIB_SRC =		ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \

LIB_OBJ = ${LIB_SRC:.c=.o}

EX_NAME = a.out

EX_SRC = main.c

EX_OBJ = ${EX_SRC:.c=.o}

all: ${EX_NAME}

main: ${EX_OBJ}

lib: ${LIB_NAME}

${EX_NAME}: ${EX_OBJ} ${LIB_NAME}
	${CC} ${CFLAGS} $^ -o ${EX_NAME}

${LIB_NAME}: ${LIB_OBJ}
	ar -rcs $@ $^ 

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${LIB_OBJ} ${EX_OBJ}

fclean: clean
	rm -f ${LIB_NAME} ${EX_NAME}

re: fclean all

.PHONY: all clean fclean re lib main
