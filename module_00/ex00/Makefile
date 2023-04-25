# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmoussam <nmoussam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 17:50:56 by nmoussam          #+#    #+#              #
#    Updated: 2023/03/31 16:25:04 by nmoussam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
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

