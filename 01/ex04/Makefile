# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 19:15:54 by slonnie           #+#    #+#              #
#    Updated: 2022/11/23 14:02:36 by slonnie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp
# HDRS	= 
OBJS	= $(SRCS:.cpp=.o)
CPP		 = clang++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -I.
NAME	= Main

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME): $(OBJS) $(HDRS)
		 $(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
clean:
	rm -rf $(OBJS)

fclean:	 clean
		 rm -rf $(NAME)
		 rm -rf *.replace

re:		fclean $(NAME)