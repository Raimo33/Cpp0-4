# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 19:18:47 by craimond          #+#    #+#              #
#    Updated: 2024/03/21 19:19:10 by craimond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
HDRS = Fixed.hpp

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

RED = \033[0;31m
GREEN = \033[0;32m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
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
