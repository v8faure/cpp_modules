# Makefile нужен для удобного управления проектом в командной строке
# Команда make работает из директории с Makefile компилирует проект 
# по прописанным правилам (в данном случае)
# можно прописать разные сценарии сборки и назначить разные команды
# можно добавить сценарии тестирования и пр.

SRCS	= main.cpp ClassTemplate.cpp				# переменные и их значения
HDRS	= ClassTemplate.hpp
OBJS	= $(SRCS:.cpp=.o)

CPP		 = clang++									# компилятор
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -I.		# флаги

NAME	= ClassTemplate								# имя исполняемого файла

.PHONY: all clean fclean re							# слова исключения. Указывать те что используются в качестве команд

all:	$(NAME)

$(NAME): $(OBJS) $(HDRS)
		 $(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
clean:												# make clean исполняет указанные ниже команды по удалению
	rm -rf $(OBJS)

fclean:	 clean										# make fclean полное удаление скомпилированных файлов
		 rm -rf $(NAME)

re:		fclean $(NAME)								# make re перекомпилирует проект с удалением