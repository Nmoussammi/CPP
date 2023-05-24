# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 13:18:02 by nmoussam          #+#    #+#              #
#    Updated: 2023/04/29 14:17:59 by nmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain
CC = c++
INC = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
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