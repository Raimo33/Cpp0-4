# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 14:09:20 by craimond          #+#    #+#              #
#    Updated: 2024/04/28 15:24:01 by craimond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorphism

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)
HDRS = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

RED = \033[0;31m
GREEN = \033[0;32m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)$(NAME) is ready$(NC)"

%.o: %.cpp
	@echo "compiling $<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "cleaning $(NAME)"
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo "$(RED)cleaned $(NAME)$(NC)"

re: clean all

.PHONY: all clean re
