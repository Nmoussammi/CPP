# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 14:32:34 by nmoussam          #+#    #+#              #
#    Updated: 2023/04/27 22:01:53 by nmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
CC = c++
INC = ClapTrap.hpp ScavTrap.hpp 
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp
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