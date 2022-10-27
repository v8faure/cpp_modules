# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 23:49:58 by slonnie           #+#    #+#              #
#    Updated: 2022/10/26 18:40:22 by slonnie          ###   ########.fr        #
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
		 CC $(CPPFLAGS) -o $(NAME) $(OBJS) $(HDRS)
clean:
	rm -rf $(OBJS)

fclean:	 clean
		 rm -rf $(NAME)

re:		fclean $(NAME)