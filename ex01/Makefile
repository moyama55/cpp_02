CXX		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98
NAME 	:= calonical_01
SRCS	:= main.cpp Fixed.cpp
OBJS	:= $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(FLAGS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all