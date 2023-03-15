#include "../inc/header.h"

void fill_columns(wchar_t *arr) {
    if (arr[1] == ' ') {
        if (rand() % 100 < 4) {
            arr[0] = get_symbol();
        }
    }
    else {
        if (rand() % 100 < 5) {
            arr[0] = ' ';
        }
        else {
            arr[0] = get_symbol();
        }
    }
}
