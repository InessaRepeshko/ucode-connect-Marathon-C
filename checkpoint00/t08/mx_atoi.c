#include <stdio.h>

int mx_atoi(const char *str) {
    int i = 0;
    int flag = 0;
    int digit = 0;
    int sign = 1;

    
    if (str[0] == 45) {
        sign = -1;
        i++;
    }
    for(; str[i] != '\0'; i++){
        if ((str[i] == 32)
        || (str[i] >= 9
        && str[i] <= 13)) {
            flag = 1;
            break;
        }
        else if (str[i] < 48
                 && str[i] > 57) {
                    flag = 1;
                    break;
            }
            else if (str[i] == 45) {
                flag = 1;
                break;
                }

        digit *= 10;
        digit += str[i];
        digit -= '0';
    }
    
    if (flag == 0) {
        return sign * digit;
    }
    else {
        return 0;
    }
}

