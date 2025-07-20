CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex03

SRC =   main.cpp \
        Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp

OBJDIR = .obj/
OBJ = $(addprefix $(OBJDIR),$(SRC:.cpp=.o))

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@


$(OBJDIR)%.o : %.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re clean fclean all