#include <stdbool.h>

bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_mersenne(int n) {
    int sum = 0;
    int i = 1;
    
    while (sum < n) {
        if (mx_is_prime(i) == 1) {
            sum = mx_pow(2, i) - 1;
        }
        
        if (sum == n) {
            return 1;
        }
        
        i++;
    }
    
    return 0;
}

