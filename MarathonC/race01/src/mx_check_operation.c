#include "../inc/header.h"

char mx_check_operation(char *s) {
	int check = -1;
    char temp;
	char *p = mx_del_extra_whitespaces(s);
    
	for (int i = 0; i < mx_strlen(p); i++) {
        if (p[i] == ' ') {
            continue;
        }
        
        if (p[i] != '+'
            && p[i] != '-'
            && p[i] !=  '*'
            && p[i] != '/'
            && p[i] != '?') {
            mx_error(E_OPERATION, s);
        }
        
		if (p[i] == '+'
            || p[i] == '-'
            || p[i] ==  '*'
            || p[i] == '/'
            || p[i] == '?') {
            if (check != -1) {
                mx_error(E_OPERATION, s);
            }
            
			check = 0;
			temp = p[i];
		}
	}
    
	return temp;
}

