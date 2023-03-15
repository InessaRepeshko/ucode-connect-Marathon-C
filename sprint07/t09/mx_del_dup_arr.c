#include <stdio.h>
#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    if (src == NULL
        || src_size < 0
        || dst_size < 0) {
        return NULL;
    }
    
    int *array = NULL;

    for (int i = 0; i < src_size; i++) {
        for (int j = i + 1; j < src_size ; j++) {
            if (src[i] == src[j] ) {
                for (int n = j; n < src_size - 1; n++) {
                    src[n] = src[n + 1];
                }
                
                src_size -= 1;
                
                if (src[i] == src[j]) {
                    j--;
                }
            }
        }
    }
        
    *dst_size = src_size;
    array = (int*) malloc(*dst_size);
    array = mx_copy_int_arr(src, *dst_size);
    
    return array;
}

