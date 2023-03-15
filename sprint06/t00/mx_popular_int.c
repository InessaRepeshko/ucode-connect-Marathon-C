int mx_popular_int(const int *arr, int size) {
    int count = 1;
    int pop = 0;
    int curr_pop;

    for (int i = 0; i < size; i++) {
        curr_pop = 0;
        
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                curr_pop++;
            }
        }
        
        if (curr_pop > count) {
            pop = arr[i];
            count = curr_pop;
        }
    }
    
    return pop;
}

