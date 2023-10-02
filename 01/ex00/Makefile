# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 16:06:38 by slonnie           #+#    #+#              #
#    Updated: 2022/11/14 16:40:36 by slonnie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
HDRS	= Zombie.hpp
OBJS	= $(SRCS:.cpp=.o)

CPP		 = clang++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -I.

NAME	= Zombie

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME): $(OBJS) $(HDRS)
		 $(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
clean:
	rm -rf $(OBJS)

fclean:	 clean
		 rm -rf $(NAME)

re:		fclean $(NAME)