#ifndef HEADER
#define HEADER

#include <fcntl.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int mx_atoi(const char *str);
int mx_strlen(const char *c);
char *mx_file_to_str(const char *filename);
char *mx_strnew(const int size);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printstr(const char *s);

#endif

