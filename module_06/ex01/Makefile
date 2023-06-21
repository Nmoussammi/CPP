# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/16 18:23:06 by nmoussam          #+#    #+#              #
#    Updated: 2023/06/16 19:47:48 by nmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serializer
CC = c++
INC = Serializer.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Serializer.cpp main.cpp
OBJ := ${SRC:.cpp=.o}
RM = rm -rf

all: ${NAME}

%.o:%.cpp ${INC}
	@$(CC) $(FLAGS) -c $< -o $@
	
${NAME}: ${OBJ}
	@$(CC) $(FLAGS) ${OBJ} -o ${NAME}
	
clean:
	@$(RM) ${OBJ}
	
fclean:
	@$(RM) ${NAME} ${OBJ}

re: fclean all