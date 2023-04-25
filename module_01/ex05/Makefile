# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 00:02:13 by nmoussam          #+#    #+#              #
#    Updated: 2023/04/13 01:25:15 by nmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CC = c++
INC = Harl.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  main.cpp Harl.cpp
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