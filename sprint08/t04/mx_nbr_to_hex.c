#include "nbr_to_hex.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    if ((long long) nbr < 0
        || (unsigned long long) nbr > 9223372036854775807
        || (void *) nbr == NULL) {
        char *result = mx_strnew(1);
        result[0] = '0';
        return result;
    }

    unsigned long number = nbr;
    int i = 0;
    int num = nbr;
    int size = 0;
    
    while (num != 0) {
        size++;
        num /= 16;
    }
    
    char *hex_array = mx_strnew(size);
    
    while (number != 0) {
        int temp = number % 16;
        
        if (temp < 10) {
            hex_array[i] = temp + 48;
        }
        else {
            hex_array[i] = temp + 87;
        }
        
        i++;
        number /= 16;
    }
    
    i--;
    
    for (int j = 0; j < i; j++, i--) {
        char tmp = hex_array[j];
        hex_array[j] = hex_array[i];
        hex_array[i] = tmp;
    }
    
    return hex_array;
}

