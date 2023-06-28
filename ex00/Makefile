.SILENT:
NAME		= 	Polymorphism

CC 			= 	c++

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98 -Wshadow -g

RM 			= 	rm -rf

INC_DIR	=	inc/

SRC_DIR	=	src/

OBJ_DIR   = temp/

SRC			=	$(addprefix $(SRC_DIR),	main.cpp \
											Animal.cpp \
											Dog.cpp \
											Cat.cpp \
											WrongAnimal.cpp \
											WrongCat.cpp)

OBJ 		= 	$(addprefix $(OBJ_DIR), $(notdir $(SRC:%.cpp=%.o)))

GREEN		= 	\033[0;32m

RESET		=	\033[0m

SUS			=	\U00000D9E

HAMMER		=	\U0001F528

BROOM		=	\U0001F9F9

$(NAME):		tmp_dir $(OBJ)
				printf '$(HAMMER)\n\t$(GREEN)Compiling	$(NAME)$(RESET)\n'
				$(CC) $(OBJ) -o $(NAME) -I $(INC_DIR)
				make done

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp | $(OBJ_DIR)
				$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

all: 			$(NAME)

clean:			
				$(RM)	$(OBJ_DIR)

fclean:			clean
				printf '$(BROOM)\n\t$(GREEN)Cleaning project$(RESET)\n'
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

tmp_dir:
				if [ ! -d $(OBJ_DIR) ]; then mkdir $(OBJ_DIR); fi

.PHONY: 		all fclean re