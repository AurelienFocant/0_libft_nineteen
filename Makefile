# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afocant <afocant@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 14:26:45 by afocant           #+#    #+#              #
#    Updated: 2024/09/28 16:34:49 by afocant          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#---------------------------------------------------------#
CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

GFLAGS	=	-g3
#---------------------------------------------------------#
SRC_DIR		=	src

SRC_SUBDIRS	=	$(shell find $(SRC_DIR)/* -type d)

SRC			=	$(shell find $(SRC_DIR) -type f -name "*.c")

OBJ_DIR		=	obj

OBJ_SUBDIRS	=	$(SRC_SUBDIRS:$(SRC_DIR)%=$(OBJ_DIR)%)

OBJ			=	$(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
#---------------------------------------------------------#
INC_DIR		=	include

INC_FLAGS	=	-I$(INC_DIR)

NAME		=	libft.a

.PHONY: all clean fclean re
#---------------------------------------------------------#
all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $@ $^ 
	@echo "LIBFT has been created"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR) $(OBJ_SUBDIRS)
	@$(CC) $(CFLAGS) $(GFLAGS) $(INC_FLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $@
$(OBJ_SUBDIRS):
	@mkdir -p $@

clean:
	@rm -rf $(OBJ_DIR)
fclean: clean
	@rm -f $(NAME)
	@echo "LIBFT fully cleaned"

re: fclean all
