# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afocant <afocant@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 14:26:45 by afocant           #+#    #+#              #
#    Updated: 2024/07/29 17:45:31 by afocant          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR	=	src

SRC		=	$(shell find $(SRC_DIR) -type f -name "*.c")

OBJ_DIR	=	obj

OBJ		=	$(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

INC_DIR	=	includes

#################################################

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

GFLAGS	=	-g

aDFLAGS	=	-fsanitize=address

#################################################

CPU		=	$(shell uname -p)

ifeq ($(CPU),arm)
	NAME	=	libft_arm.a
else
	NAME	=	libft_x86.a
endif


#################################################

all: $(NAME)

$(NAME): $(OBJ)
	@echo "compiling object files"
	@echo "creating archive file"
	@ar -rcs $@ $^ 

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(GFLAGS) $(DFLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIR)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
