# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 23:49:58 by slonnie           #+#    #+#              #
#    Updated: 2022/11/03 18:01:15 by slonnie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Contact.cpp PhoneBook.cpp
HDRS	= Contact.hpp PhoneBook.hpp
OBJS	= $(SRCS:.cpp=.o)

#CPP		 = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -I.

NAME	= phonebook

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME): $(OBJS) $(HDRS)
		 clang++ $(CPPFLAGS) -o $(NAME) $(OBJS)
clean:
	rm -rf $(OBJS)

fclean:	 clean
		 rm -rf $(NAME)

re:		fclean $(NAME)