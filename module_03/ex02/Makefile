# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 14:32:34 by nmoussam          #+#    #+#              #
#    Updated: 2023/04/27 22:17:46 by nmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap
CC = c++
INC = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
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