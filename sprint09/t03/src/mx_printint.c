#include "../inc/header.h"

void mx_printint(int s) {
    char a[102];
    long n = s;
    int i = 0;

    if (n == 0) {
        mx_printchar(s + '0');
    }

    if (n < 0) {
        n *= -1;
        mx_printchar('-');
    }

    while (n != 0) {
        a[i++] = (n % 10) + '0';
        n /= 10;
    }

    for (int j = i - 1; j >= 0; j--) {
        mx_printchar(a[j]);
    }
}

