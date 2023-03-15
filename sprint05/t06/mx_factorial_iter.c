int mx_factorial_iter(int n) {
    int res = 1;

    if (n < 0
        || n > 12) {
        return 0;
    }
    
    if (n == 0) {
        return 1;
    }

    for (int i = n; i > 1; i--) {
        res *= i;
    }

    if (res > 2147483647
        || res < 0) {
        return 0;
    }
    else {
        return res;
    }
}

