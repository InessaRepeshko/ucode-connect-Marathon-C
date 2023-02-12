#ifndef HEADER_H
#define HEADER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define E_OPERATION "Invalid operation: "
#define E_OPERAND "Invalid operand: "
#define E_RESULT "Invalid result: "
#define E_USAGE "usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]"

int mx_strlen(const char *s);
long long mx_atoi(const char *str);
long long mx_pow(long long n, unsigned int pow);
char mx_check_operation(char *s);
char *mx_check_sign(char *s);
char *mx_del_extra_whitespaces(const char *str);
char *mx_itoa(long long num);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strtrim(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_compute(char *operand1, char *operand2, char *result, char operation);
void mx_error(char *e, char *argv);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(long long n);
void mx_printstr(const char *s);
void mx_strdel(char **str);

#endif

