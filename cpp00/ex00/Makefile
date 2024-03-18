# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 20:34:36 by craimond          #+#    #+#              #
#    Updated: 2024/03/18 17:51:34 by craimond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

RED = \033[0;31m
GREEN = \033[0;32m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@$(RM) $(OBJS)
	@echo "$(GREEN)$(NAME) is ready$(NC)"

%.o: %.cpp
	@echo "compiling $<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)cleaning $(NAME)$(NC)"
	@$(RM) $(OBJS)
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean re

