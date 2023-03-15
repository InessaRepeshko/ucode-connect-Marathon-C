#ifndef MINILIBMX
#define MINILIBMX

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int mx_atoi(const char *str);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strnew(const int size);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printstr(const char *s);

#endif

