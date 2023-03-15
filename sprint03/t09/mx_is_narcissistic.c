#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

static int number_length (int num) {
    int i;

    for (i = 0; num != 0; i++) {
        num = num / 10;
    }
    
    return i;
}

bool mx_is_narcissistic(int num) {
    int n = num;
    int sum = 0;
    int len = number_length(num);
    
    if (num < 0) {
        return 0;
    }
    
    while (num != 0) {
        sum = sum + mx_pow((num % 10), len);
        num = num / 10;
    }
    
    if (n == sum) {
        return 1;
    }
    
    return 0;
}

