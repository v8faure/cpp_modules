# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 21:46:08 by slonnie           #+#    #+#              #
#    Updated: 2022/11/15 15:11:46 by slonnie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Weapon.cpp HumanA.cpp 
HDRS	= Weapon.hpp HumanA.hpp 
OBJS	= $(SRCS:.cpp=.o)
# HumanB.cpp HumanB.hpp
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