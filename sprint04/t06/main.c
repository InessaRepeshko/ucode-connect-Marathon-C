#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);

//bool mx_isdigit(int c) {
//    if (c >= 48
//        && c <= 57) {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//
//bool mx_isspace(char c) {
//    if ((c >= 9
//        && c <= 13)
//        || (c == 32)) {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//
//int mx_atoi(const char *str) {
//    int start = -1;
//    int end = -1;
//    int sign = 0;
//    unsigned long long res = 0;
//
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (str[i] == 43
//            && mx_isdigit(str[i + 1]) == 1) {
//            sign = 0;
//            continue;
//        }
//
//        if (str[i] == 45
//            && mx_isdigit(str[i + 1]) == 1) {
//            sign = 1;
//            continue;
//        }
//
//        if (mx_isspace(str[i]) == 0
//            && start == -1) {
//            start = i;
//        }
//
//        if (start > -1
//            && mx_isdigit(str[i]) == 0
//            && end == -1) {
//            end = i;
//        }
//    }
//
//    if (end == -1) {
//        for (int i = start; str[i] != '\0'; i++) {
//            res = 10 * res + (int)str[i] - 48;
//        }
//    } else {
//        for (int i = start; i < end; i++) {
//            res = 10 * res + (int)str[i] - 48;
//        }
//    }
//
//    if (sign == 1
//        && res > 9223372036854775807) {
//        return 0;
//    } else if (sign == 0
//               && res > 9223372036854775807) {
//        return -1;
//    } else {
//        return sign == 0 ? res : -1 * res;
//    }
//}


 int main(void) {
//     const char *str = "2147483648";
//     printf("%d\n", atoi(str));
//     printf("%d\n", mx_atoi(str));
//
//     const char *str1 = "-2147483652";
//     printf("%d\n", atoi(str1));
//     printf("%d\n", mx_atoi(str1));
     
     const char *str2 = "-922337203685477580";
     printf("%d\n", atoi(str2));
     printf("%d\n", mx_atoi(str2));

     const char *str3 = "+922337203685477580";
     printf("%d\n", atoi(str3));
     printf("%d\n", mx_atoi(str3));

//          const char *str3 = "+98765";
//          printf("%d\n", atoi(str3));
//          printf("%d\n", mx_atoi(str3));
 }

