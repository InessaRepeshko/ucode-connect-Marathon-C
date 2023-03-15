void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    int i;

    for(i = 0; str[i] != '\0'; i++) {
        if (str[i] == delim) {
            while (str[i] == delim) {
                i++;
            }
            
            mx_printchar('\n');
        }
        
        mx_printchar(str[i]);
    }
    
    mx_printchar('\n');
}

