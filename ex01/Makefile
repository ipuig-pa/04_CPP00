COMPILER = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

SRC = PhoneBook.cpp
HEADER = 	PhoneBook.hpp \
			Contact.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(CFLAGS) $(OBJ) -o $(NAME)

#add headers somewhere
%.o: %.cpp
	$(COMPILER) $(CFLAGS) -o $@ -c $<

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re