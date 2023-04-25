# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 20:58:10 by nmoussam          #+#    #+#              #
#    Updated: 2023/04/04 16:57:29 by nmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = c++
INC = contact.hpp phonebook.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = phonebook.cpp utils.cpp main.cpp 
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

