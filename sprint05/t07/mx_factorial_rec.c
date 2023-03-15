int mx_factorial_rec(int n) {
    if (n < 0
        || n > 12) {
        return 0;
    }
    
    if (n == 0) {
        return 1;
    }

    int res = n * mx_factorial_rec(n - 1);

    if (res > 2147483647
        || res < 0) {
        return 0;
    }
    else {
        return res;
    }
}

