#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size) {
    if (!size
        || size < 0
        || size > 2147483647) {
        return NULL;
    }
    
    char *str = (char *) malloc(sizeof(char) * (size + 1));

    for (int i = 0; i < size; i++) {
        str[i] = '\0';
    }
    
    return str;
}

