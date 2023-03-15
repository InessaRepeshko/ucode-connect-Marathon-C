#include "../inc/header.h"

char *mx_itoa(long long num) {
	char *string = NULL;
    int size = 0;
    long long copy_num = num;
    
	if (num == 0) {
        string = mx_strnew(1);
        string[0] = '0';
		return string;
	}
    
	if (copy_num < 0) {
		size++;
        copy_num *= -1;
	}
    
	while (copy_num != 0) {
        copy_num = copy_num / 10;
		size++;
	}
    
    string = mx_strnew(size);
    
	if (num < 0) {
        string[0] = '-';
		num *= -1;
	}
    
    string[size--] = '\0';
    
	while ((num != 0
            && size >= 0)
           && string[size] != '-') {
        string[size--] = (num % 10) + '0';
		num /= 10;
	}
    
	return string;
}

