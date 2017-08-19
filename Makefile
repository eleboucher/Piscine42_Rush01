# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/19 10:43:40 by elebouch          #+#    #+#              #
#    Updated: 2017/08/19 18:14:23 by elebouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror 
EXEC = colle-2

SRCS =	srcs/main.c			\
	  	srcs/processing.c	\
		srcs/display.c		\
		srcs/str_ult.c		

INCLUDES = includes/

all: $(EXEC)

$(EXEC):
	$(CC) $(FLAGS) $(SRCS) -I $(INCLUDES) -o $(EXEC)

clean:

fclean:	clean
	rm -rvf $(EXEC)

re: fclean all

.PHONY: all clean fclean re
