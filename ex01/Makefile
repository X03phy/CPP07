# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: x03phy <x03phy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 15:32:40 by ebonutto          #+#    #+#              #
#    Updated: 2025/05/15 22:36:14 by x03phy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Iter
CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = obj/
SRC_DIR = src/
INC_DIR = include/

SRC = main.cpp
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
	$(CPPC) $(CPPFLAGS) -I $(INC_DIR) -o $@ -c $< 

$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAGS) $^ -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re