NAME=iter

HPP=-I iter.hpp

FLAGS= -Wall -Wextra -Werror $(HPP)

SRC=iter.cpp \
	main.cpp

OBJ=$(SRC:.cpp=.o)

%.o: %.c
	clang++ $(FLAGS) -c $< -o $@ 

$(NAME): $(OBJ)
	clang++ -g $(FLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all