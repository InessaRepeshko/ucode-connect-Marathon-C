#include "../inc/header.h"

void next_row(wchar_t *arr, int rows) {
    for (int i = rows - 1; i >= 0; i--) {
        if (i > 0) {
            arr[i] = arr[i - 1];
        }
        else {
            arr[i] = ' ';
        }
    }
}

