# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 21:18:04 by slonnie           #+#    #+#              #
#    Updated: 2022/11/14 21:23:31 by slonnie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp
# HDRS	= 
OBJS	= $(SRCS:.cpp=.o)

CPP		 = clang++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

NAME	= Main

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME): $(OBJS)
		 $(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
clean:
	rm -rf $(OBJS)

fclean:	 clean
		 rm -rf $(NAME)

re:		fclean $(NAME)