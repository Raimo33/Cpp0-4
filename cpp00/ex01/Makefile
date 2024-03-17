# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 20:34:36 by craimond          #+#    #+#              #
#    Updated: 2024/03/17 21:27:07 by craimond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = PhoneBook.cpp Contact.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

RED = \033[0;31m
GREEN = \033[0;32m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@$(RM) $(OBJS)
	@echo "$(GREEN)megaphone is ready$(NC)"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "compiling $<"

clean:
	@rm -f $(NAME)
	@echo "$(RED)cleaned $(NAME)$(NC)"

re: clean all

.PHONY: all clean re

