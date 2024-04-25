LIB_SRC =	ft_atoi.c \
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

BONUS_SRC =	ft_lstadd_back_bonus.c \
			ft_lstadd_front_bonus.c \
	 		ft_lstclear_bonus.c \
	 		ft_lstdelone_bonus.c \
			ft_lstiter_bonus.c \
	 		ft_lstlast_bonus.c \
			ft_lstmap_bonus.c \
	 		ft_lstnew_bonus.c \
	 		ft_lstsize_bonus.c \

BONUS_OBJ = ${BONUS_SRC:.c=.o}

#################################################

CC = gcc

CFLAGS = -Wall -Wextra -Werror

G_FLAG = -g

#################################################

NAME = libft.a

all: ${NAME}

${NAME}: ${LIB_OBJ}
	ar -rcs $@ $^ 

bonus: ${BONUS_OBJ} ${LIB_NAME}
	ar -rcs ${NAME} ${BONUS_OBJ}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${LIB_OBJ} ${BONUS_OBJ}
fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
