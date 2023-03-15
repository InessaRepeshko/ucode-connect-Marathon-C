void mx_arr_rotate(int *arr, int size, int shift) {
    int count = shift % size;
    int temp[size];
    int index = 0;

    if (count > 0) {
        for (int i = size - count; i < size; i++) {
            temp[index] = arr[i];
            index++;
        }
        
        for (int i = 0; i < size - count; i++) {
            temp[index] = arr[i];
            index++;
        }
        
        for (int i = 0; i < size; i++) {
            arr[i] = temp[i];
        }
    }
    else if (count < 0) {
        count *= -1;
        
        for (int i = count; i < size; i++) {
            temp[index] = arr[i];
            index++;
        }
        
        for (int i = 0; i < count; i++) {
            temp[index] = arr[i];
            index++;
        }
        
        for (int i = 0; i < size; i++) {
            arr[i] = temp[i];
        }
    }
}

