# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 22:29:35 by nmoussam          #+#    #+#              #
#    Updated: 2023/04/17 03:39:30 by nmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FixedPoint
CC = c++
INC = Fixed.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Fixed.cpp 
OBJ := ${SRC:.cpp=.o}
RM = rm -rf

all: ${NAME}

%.o:%.cpp
	@$(CC) $(FLAGS) -c $< -o $@
	
${NAME}: ${OBJ}
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	
clean:
	@$(RM) ${OBJ}
	
fclean:
	@$(RM) ${NAME} ${OBJ}

re: fclean all