CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
RM = rm -rf
INC_DIR = inc
SRC_DIR = src
INC_FILES = $(wildcard $(INC_DIR)/*.h)
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
NAME = way_home

.PHONY: all WAYHOME uninstall clean reinstall

all: WAYHOME

WAYHOME:
	@$(CC) $(CFLAGS) $(SRC_FILES) -I $(INC_DIR) -o $(NAME)

uninstall: clean

clean:
	@$(RM) $(NAME)

reinstall: uninstall all

