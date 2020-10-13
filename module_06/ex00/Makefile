NAME =			convert

SRCS =			Convert.cpp \
				main.cpp			

OBJS =			$(SRCS:.cpp=.o)

CPP =			clang++

CFLAGS =		-Wall -Werror -Wextra -std=c++98


%.o:			%.c
				$(CPP) $(CFLAGS) $<

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CFLAGS) $(OBJS) -I. -o $(NAME)

clean:			
				$(RM) $(OBJS)

fclean: 		clean
				$(RM) $(NAME)

re:				fclean all

.PHONY: 		fclean clean all re
