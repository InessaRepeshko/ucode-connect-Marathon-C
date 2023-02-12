#include "../inc/header.h"

long long mx_pow(long long n, unsigned int pow) {
    long long temp = n;
    
	for (unsigned int i = 1 ; i < pow; i++) {
		n *= temp;
	}
    
    if (pow == 0) {
        return 1;
    }
    
	return n;
}

