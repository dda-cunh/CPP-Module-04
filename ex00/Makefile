.SILENT:
NAME		= 	Polymorphism

CC 			= 	c++

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98 -Wshadow -g

RM 			= 	rm -f

INC_DIR	=	inc/

SRC_DIR	=	src/

SRC			=	$(addprefix $(SRC_DIR),	main.cpp \
											Animal.cpp \
											Dog.cpp \
											Cat.cpp \
											WrongAnimal.cpp \
											WrongCat.cpp)

OBJ 		= 	$(SRC:%.c=%.o)

GREEN		= 	\033[0;32m

RESET		=	\033[0m

SUS			=	\U00000D9E

BROOM		=	\U0001F528

$(NAME):		$(OBJ)
				printf '$(BROOM)$(GREEN)Compiling	$(NAME)$(RESET)\n'
				$(CC) $(OBJ) -o $(NAME) -I $(INC_DIR)
				make done

all: 			$(NAME)

fclean:
				printf "🧹$(GREEN)Cleaning project$(RESET)\n"
				$(RM) $(NAME)
				printf '$(SUS)\n'

re:				fclean	all

done:
				clear
				make compiled
compiled:
				printf "															 	\n"
				printf "$(GREEN)	$(NAME)							 			$(RESET)\n"
				printf "$(GREEN)                             _  _             _ $(RESET)\n"
				printf "$(GREEN)                            (_)| |           | |$(RESET)\n"
				printf "$(GREEN)  ____   ___   ____   ____   _ | |  ____   _ | |$(RESET)\n"
				printf "$(GREEN) / ___) / _ \ |    \ |  _ \ | || | / _  ) / || |$(RESET)\n"
				printf "$(GREEN)( (___ | |_| || | | || | | || || |( (/ / ( (_| |$(RESET)\n"
				printf "$(GREEN) \____) \___/ |_|_|_|| ||_/ |_||_| \____) \____|$(RESET)\n"
				printf "$(GREEN)                     |_|                        $(RESET)\n"
				printf "																\n"

.PHONY: 		all fclean re