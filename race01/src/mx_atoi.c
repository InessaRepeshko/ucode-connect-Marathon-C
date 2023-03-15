#include "../inc/header.h"

long long mx_atoi(const char *str) {
    long long number = 0;
    int sign = 1;
    bool finish = 0;
    bool is_digit = 0;
    
    for (int i = 0 ; finish != 1; i++) {
        if ((str[0] == '-'
             || str[0] == '+')
            && sign == 1) {
            if (str[0] == '-') {
                sign = -1;
            }
        }
        else if (mx_isdigit(str[i]) == 1) {
            number = (number * 10) + (str[i] - '0');
            is_digit = 1;
        }
        else if (str[i] == '\0') {
            finish = 1;
        }
        else {
            return 0;
        }
    }
    
    if (is_digit == 0) {
        return 0;
    }
    
    return sign * number;
}

