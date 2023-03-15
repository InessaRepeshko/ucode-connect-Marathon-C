#include <stdio.h>
#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    if (src == NULL
        || size < 0) {
        return NULL;
    }
    
    int *dst = NULL;
    dst = (int *) malloc(size * sizeof(int));
    
    for (int i = 0; i < size; i++) {
        dst[i] = src[i];
    }
    
    return dst;
}

