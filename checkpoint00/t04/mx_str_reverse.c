void mx_str_reverse(char *s) {
    int i = 0;
    char str = s[i];
    
    while (str != 0) {
        i++;
        str = s[i];
    }
    
    int length = i;
    
    for (int j = 0; j < length / 2; j++) {
        char temp = s[j];
        s[j] = s[length - j - 1];
        s[length - j - 1] = temp;
    }
}

