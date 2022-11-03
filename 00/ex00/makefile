# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 21:04:04 by slonnie           #+#    #+#              #
#    Updated: 2022/11/03 21:06:55 by slonnie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= megaphone.cpp
OBJS	= $(SRCS:.cpp=.o)

CPP		 = clang++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

NAME	= megaphone

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME): $(OBJS) $(HDRS)
		 $(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
clean:
	rm -rf $(OBJS)

fclean:	 clean
		 rm -rf $(NAME)

re:		fclean $(NAME)