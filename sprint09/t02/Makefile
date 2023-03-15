CC = clang
CFLAGS = -c -std=c11 -Wall -Wextra -Werror -Wpedantic
SRC = $(addprefix src/,mx_atoi.c mx_isdigit.c mx_isspace.c mx_strlen.c mx_printchar.c mx_printstr.c mx_printint.c mx_strcmp.c mx_strcpy.c)
HEADER = $(addprefix inc/,header.h)
OBJ = mx_atoi.o mx_isdigit.o mx_isspace.o mx_strlen.o mx_printchar.o mx_printstr.o mx_printint.o mx_strcmp.o mx_strcpy.o
OBJS_FOLDER_NAME = obj
EXEC_NAME = minilibmx.a

all: MINILIBMX

MINILIBMX: $(HEADER) $(SRC)
		$(CC) $(CFLAGS) $(SRC)
		mkdir $(OBJS_FOLDER_NAME)
		mv $(OBJ) $(OBJS_FOLDER_NAME)
		ar rsc $(EXEC_NAME) $(addprefix obj/,$(OBJ))

uninstall:
		rm -rf $(OBJS_FOLDER_NAME)
		rm $(EXEC_NAME)

clean:
	rm -rf $(OBJS_FOLDER_NAME)

reinstall: uninstall all

