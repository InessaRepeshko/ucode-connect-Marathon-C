double mx_pow(double n, unsigned int pow) {
    double res = 1;

    if (pow != 0) {
        while (pow != 0) {
            res *= n;
            pow--;
        }
    }

    return res;
}

