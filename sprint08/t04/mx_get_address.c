#include "get_address.h"

char *mx_get_address(void *p) {
    char *int_address = mx_nbr_to_hex((unsigned long)p);
    char *hex_address = mx_strnew(mx_strlen(int_address) + 2);
    
    hex_address[0] = '0';
    hex_address[1] = 'x';
    
    mx_strcpy(&hex_address[2], int_address);
    free(int_address);
    
    return hex_address;
}

