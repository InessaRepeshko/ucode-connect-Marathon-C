CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
RM = rm
INC_FOLDER = inc
OBJ_FOLDER = obj
SRC_FILES = src/*.c
OBJ_FILES = obj/*.o
LIB = minilibmx.a
NAME = playlist

.PHONY: all clean uninstall reinstall

all: PLAYLIST

PLAYLIST: $(INC_FOLDER) $(SRC_FILES)
	@mkdir -p $(OBJ_FOLDER)
	@$(CC) $(CFLAGS) -I $(INC_FOLDER) -c $(SRC_FILES)
	@mv *.o $(OBJ_FOLDER)
	@ar -src $(LIB) $(OBJ_FILES)
	@$(CC) $(CFALGS) -o $(NAME) $(LIB)
	@$(RM) -f $(LIB)

uninstall: clean
	@$(RM) -f $(NAME)

clean:
	@$(RM) -rf $(OBJ_FOLDER)

reinstall: uninstall all

