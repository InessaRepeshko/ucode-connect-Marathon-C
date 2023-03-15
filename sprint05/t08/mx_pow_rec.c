double mx_pow_rec(double n, unsigned int pow) {
    if (pow < 0
        || pow > 2147483647) {
        return 0;
    }
    
    if (pow == 0
        && n < 0 ) {
        return -1;
    } else if (pow == 0
               && n >= 0 ) {
                return 1;
            }
    
    if (pow == 1) {
        return n;
    }
    
    return n * mx_pow_rec(n, pow - 1);
}

