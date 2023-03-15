#include "duplicate.h"

int *mx_copy_int_arr(const int *src, int size) {
    if (src == NULL
        || size < 1) {
        return NULL;
    }
    
    int *dst = (int *) malloc(sizeof(int) * size);
    
    for (int i = 0; i < size; i++) {
        dst[i] = src[i];
    }
    
    return dst;
}

