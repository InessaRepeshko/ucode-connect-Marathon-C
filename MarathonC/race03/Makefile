CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -Iinc -lncurses
RM = rm -rf
INC_DIR = inc
SRC_DIR = src
INC_FILES = $(wildcard $(INC_DIR)/*.h)
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
NAME = matrix_rain

.PHONY: all WAYHOME uninstall clean reinstall

all: MATRIXRAIN

MATRIXRAIN: $(SRC_FILES)
	@$(CC) $(CFLAGS) -o $(NAME) $^

uninstall: clean

clean:
	@$(RM) $(NAME)

reinstall: uninstall all


