# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 19:50:25 by slonnie           #+#    #+#              #
#    Updated: 2022/11/23 19:51:03 by slonnie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Karen.cpp
HDRS	= Karen.hpp
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

re:		fclean $(NAME)