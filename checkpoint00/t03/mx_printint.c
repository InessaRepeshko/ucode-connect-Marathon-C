#include <unistd.h>

void mx_printint(int s) {
    char a[102];
    long n = s;
    int i = 0;

    if (n == 0) {
        write(1, "0", 1);
    }

    if (n < 0) {
        n *= -1;
        
        write(1, "-", 1);
    }

    while (n != 0) {
        a[i++] = (n % 10) + '0';
        n /= 10;
    }

    for (int j = i - 1; j >= 0; j--) {
        write(1, &a[j], 1);
    }
}

