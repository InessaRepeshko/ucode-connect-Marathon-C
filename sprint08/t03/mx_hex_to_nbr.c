#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    if (hex == NULL) {
        return 0;
    }
    
    for (int i = 0; hex[i] != '\0'; i++) {
        if (hex[i] == 32
            || (hex[i] >= 9
                && hex[i] <= 13)) {
            continue;
        }

        if ((hex[i] == 43
             && hex[i + 1] == 45)
            || (hex[i] == 45
                && hex[i + 1] == 43)) {
            return 0;
        }

        if (hex[i] == 45
            && (mx_isalpha(hex[i + 1]) == 1
                || mx_isdigit(hex[i + 1]) == 1)) {
            return 0;
        }

        if (hex[i] == 43
             && (mx_isalpha(hex[i + 1]) == 1
                 || mx_isdigit(hex[i + 1]) == 1)) {
            continue;
        }
    }
    
    int j = 0;
    
    while (hex[j] != '\0') {
        j++;
    }
        
    unsigned long result = 0;
    unsigned long dec_number = 1;
        
    for (int i = j - 1; i >= 0; i--) {
        if (mx_isdigit(hex[i])) {
            result += ((hex[i] - 48) * dec_number);
            dec_number *= 16;
        }
            
        if (mx_isalpha(hex[i])) {
            if (mx_isupper(hex[i])) {
                result += ((hex[i] - 55) * dec_number);
            }
            else if (mx_islower(hex[i])) {
                result += ((hex[i] - 87) * dec_number);
            }
                
            dec_number *= 16;
        }
    }
    
    if ((long long) result < 0
        || (unsigned long long) result > 9223372036854775807) {
        return 0;
    }
        
    return result;
}

