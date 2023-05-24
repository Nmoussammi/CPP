# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 16:09:05 by nmoussam          #+#    #+#              #
#    Updated: 2023/04/29 20:22:45 by nmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CC = c++
INC = AMateria.hpp ICharacter.hpp Character.hpp Cure.hpp Ice.hpp IMateriaSource.hpp MateriaSource.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
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