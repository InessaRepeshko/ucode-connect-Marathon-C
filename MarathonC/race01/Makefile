FUNC = src/*.c
LIB = minilibmx.a
NAME = part_of_the_matrix
OBJS = obj/*.o
OBJS_FOLDER = obj

all: PART_OF_THE_MATRIX

PART_OF_THE_MATRIX:
	mkdir -p $(OBJS_FOLDER)
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c $(FUNC)
	mv *.o $(OBJS_FOLDER)
	ar -src $(LIB) $(OBJS)
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o $(NAME) $(LIB)
	rm -f $(LIB)

uninstall: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJS_FOLDER)

reinstall: uninstall all

