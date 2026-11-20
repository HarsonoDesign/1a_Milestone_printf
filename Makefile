NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = ft_printf.h

SRC = ft_printf.c ft_printf_utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re


# ------------------------------------- Test Files
TEST_DIR = ../backup_1a_Milestone_printf

TEST_FILES = 	01test.c \
				02test.c \
				03test.c \
				04test.c \
				05test.c \
				06test.c \
				07test.c \
				08test.c \
				09test.c

TEST_EXE = $(TEST_FILES:.c=)

vpath %.c $(TEST_DIR)

test: $(TEST_EXE)

$(TEST_EXE): %: %.c $(NAME) $(HEADER)
	$(CC) $(CFLAGS) -I. $< $(NAME) -o $@
	./$@

cleantest:
	rm -f $(TEST_EXE) $(OBJ) $(NAME)

.PHONY: test cleantest