NAME		=	ex03
CC		= 	g++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -I $(INCLUDE) -ggdb3 -fsanitize=address
SRCDIR		=	./
OBJDIR		=	./obj/
INCLUDE		=	./

SRC		=	main.cpp	\
			AMateria.cpp	\
			Character.cpp	\
			Cure.cpp	\
			Ice.cpp		\
			MateriaSource.cpp
	
OBJ		=	${addprefix $(OBJDIR), $(SRC:%.cpp=%.o)}


# ===== #


all:			$(NAME)

$(NAME):		$(OBJDIR) $(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
				rm -rf $(OBJDIR)

fclean:			
				rm -rf $(NAME) $(OBJDIR)

re:				fclean all

$(OBJDIR)%.o:	$(SRCDIR)%.cpp
				$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
				@mkdir -p $(OBJDIR)

.PHONY:			re clean fclean objs all
