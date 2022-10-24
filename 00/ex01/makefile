# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 23:49:58 by slonnie           #+#    #+#              #
#    Updated: 2022/10/25 00:23:10 by slonnie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Contact.cpp PhoneBook.cpp
HDRS	= Contact.hpp PhoneBook.hpp
OBJS	= $(SRCS:.cpp=.o)

#CPP		 = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

NAME	= phonebook

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME): $(OBJS) $(HDRS)
		 c++ $(CPPFLAGS) -o $(NAME) $(OBJS) $(HDRS)
clean:
	rm -rf $(OBJS)

fclean:	 clean
		 rm -rf $(NAME)

re:		fclean $(NAME)