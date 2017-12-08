# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 15:44:41 by lsauvage          #+#    #+#              #
#    Updated: 2017/11/10 16:22:06 by lsauvage         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = ft_display_file

SRC = ft_display_file.c

FLAGS = -Wall -Wextra -Werror

OPTIONS = -c

all: ft_display_file.o
	@$(CC) $(FLAGS) ft_display_file.o -o $(NAME)
	@echo "\033[32m$(NAME) properly created\033[0m"

ft_display_file.o: $(SRC)
	@$(CC) $(FLAGS) -c $(SRC)

clean:
	@/bin/rm -f *.o
	@echo "\033[33mall .o files are removed\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[31m$(NAME) is deleted\033[0m"
