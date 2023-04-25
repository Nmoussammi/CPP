# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/09 21:45:59 by nmoussam          #+#    #+#              #
#    Updated: 2023/04/09 21:47:56 by nmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon
CC = c++
INC = Weapon.hpp HumanA.hpp HumanB.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  humanA.cpp humanB.cpp main.cpp Weapon.cpp
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