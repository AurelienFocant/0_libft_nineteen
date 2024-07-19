# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afocant <afocant@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 14:26:45 by afocant           #+#    #+#              #
#    Updated: 2024/07/19 14:52:17 by afocant          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR	=	src

SRC		=	$(wildcard $(SRC_DIR)/*.c)

OBJ_DIR	=	obj

OBJ		=	$(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

INC_DIR	=	includes

#################################################

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

GFLAGS	=	-g

DFLAGS	=	-fsanitize=address

#################################################

NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $^ 

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(GFLAGS) $(DFLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIR)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
