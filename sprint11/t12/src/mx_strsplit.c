#include "../inc/list.h"

char **mx_strsplit(char const *s, char c) {
	if (s == NULL) {
        return NULL;
    }
    
	int words_count = mx_count_words(s, c);
    char **result = (char **) malloc( sizeof(char *) * (words_count + 1));
	int i = 0;
    
	while (s[i] == c) {
        i++;
    }
    
	for (int counter = 0; counter < words_count; counter++) {
		int size = 0;
		int start = i;
		while (s[i] != c 
                && s[i] != '\0') {
			size++;
			i++;
		}
        
		result[counter] = mx_strnew(size);
		mx_strncpy(result[counter], &s[start], size);
        
		while (s[i] == c) {
            i++;
        }
	}

	result[words_count] = NULL;

	return result;
}

