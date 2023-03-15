CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
HEADER = $(wildcard inc/*.h)
NAME = calc
SRC = $(wildcard src/*.c)

all: $(NAME)

$(NAME): $(HEADER) $(SRC)
	$(CC) $(CFLAGS) -o $@ $(SRC)

uninstall:
	rm -f $(NAME)

clean:
	
reinstall: uninstall all

