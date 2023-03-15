CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -c -o
SRC = $(wildcard src/*.c)
HEADER = $(wildcard inc/*.h)
OBJ = $(SRC:src/%.c=obj/%.o)
OBJS_FOLDER_NAME = obj
EXEC_NAME = minilibmx.a

all: MINILIBMX

MINILIBMX: $(OBJ)
	ar rsc $(EXEC_NAME) $^

obj/%.o: src/%.c | obj
	$(CC) $(CFLAGS) $@ $^

obj:
	mkdir -p $@

uninstall:
	rm -rf $(OBJS_FOLDER_NAME)
	rm -f $(EXEC_NAME)

clean:
	rm -rf $(OBJS_FOLDER_NAME)


reinstall: uninstall all

