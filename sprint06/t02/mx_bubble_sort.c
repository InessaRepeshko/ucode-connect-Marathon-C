int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
    char *bubble;
    int count = 0;
    
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (size - 1); j > i; j--) {
            if (mx_strcmp(arr[j - 1], arr[j]) > 0) {
                bubble = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = bubble;
                count++;
            }
        }
    }
    
    return count;
}

