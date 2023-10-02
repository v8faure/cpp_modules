# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 12:27:38 by slonnie           #+#    #+#              #
#    Updated: 2022/11/22 12:29:59 by slonnie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Brass.cpp BrassPlus.cpp
HDRS	= Brass.hpp BrassPlus.hpp
OBJS	= $(SRCS:.cpp=.o)
CPP		 = clang++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -I.
NAME	= Brass

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME): $(OBJS) $(HDRS)
		 $(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
clean:
	rm -rf $(OBJS)

fclean:	 clean
		 rm -rf $(NAME)

re:		fclean $(NAME)