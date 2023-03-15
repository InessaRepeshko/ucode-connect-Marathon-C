#include "../inc/header.h"

char *mx_file_to_str(const char *filename) {
    if (!filename) {
        return NULL;
    }
    
    int file_descr = open(filename, O_RDONLY);
    
    if (file_descr < 0) {
        return NULL;
    }
    
    int size = 1;
    char character;
    
	while (read(file_descr, &character, 1) != 0) {
        if (character != 44) {
            if (character != 35
                && character != 46
                && character != 10) {
                mx_printerr("map error\n");

                exit(-1);
            }

            size++;
        }
	}

    if (close(file_descr) < 0) {
        return NULL;
    }

    int file_descr1 = open(filename, O_RDONLY);

    if (file_descr1 < 0) {
        return NULL;
    }

    int j = 0;
    char *str = mx_strnew(size);

    for (int i = 0; read(file_descr, &character, 1) != 0 ; i++) {
        if (character != 44
            && character != 10) {
            str[j++] = character;
        }
        else if (character == 10
            && str[j - 1] != 10) {
            str[j++] = 10;
        }
        continue;
    }

    str[size] = 10;

    if (close(file_descr) < 0) {
        return NULL;
    }

    return str;
}

