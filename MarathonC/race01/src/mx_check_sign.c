#include "../inc/header.h"

char *mx_check_sign(char *s) {
    s = mx_strtrim(s);
    
    for (int i = 0; i < mx_strlen(s); i++) {
        if (!mx_isdigit(s[i])
            && s[i] != 43
            && s[i] != 45
            && s[i] != 63) {
            return NULL;
        } else if ((s[i] == 43
                    || s[i] == 45
                    || s[i] == 63
                    || mx_isdigit(s[i]))
                   && (mx_isdigit(s[i + 1]) == 1
                       || s[i + 1] == 63)) {
            continue;
        }
    }
    
    return s;
}

