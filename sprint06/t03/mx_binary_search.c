int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int first = 0;
    int last = size - 1;
    int middle;
    int position = 0;

    while (first <= last) {
        middle = (first + last) / 2;
        (*count)++;
        
        if (mx_strcmp(arr[middle], s) == 0) {
            position = middle;
            return position;
        }
        
        if (mx_strcmp(arr[middle], s) > 0) {
            last = middle - 1;
        }
        else {
            first = middle + 1;
        }
    }
    
    (*count) = 0;
    return -1;
}

