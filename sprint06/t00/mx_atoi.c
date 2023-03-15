#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str) {
    int start = -1;
    int end = -1;
    int sign = 0;
    unsigned long long res = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 43
            && mx_isdigit(str[i + 1]) == 1) {
            sign = 0;
            continue;
        }
        
        if (str[i] == 45
            && mx_isdigit(str[i + 1]) == 1) {
            sign = 1;
            continue;
        }
        
        if (mx_isspace(str[i]) == 0
            && start == -1) {
            start = i;
        }
        
        if (start > -1
            && mx_isdigit(str[i]) == 0
            && end == -1) {
            end = i;
        }
    }
    
    if (end == -1) {
        for (int i = start; str[i] != '\0'; i++) {
            res = 10 * res + (int)str[i] - 48;
        }
    } else {
        for (int i = start; i < end; i++) {
            res = 10 * res + (int)str[i] - 48;
        }
    }
    
    if (sign == 1
        && res > 9223372036854775807) {
        return 0;
    } else if (sign == 0
               && res > 9223372036854775807) {
        return -1;
    } else {
        return sign == 0 ? res : -1 * res;
    }
}

