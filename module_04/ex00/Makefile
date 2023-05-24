# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 13:18:02 by nmoussam          #+#    #+#              #
#    Updated: 2023/04/29 13:37:57 by nmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CC = c++
INC = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
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