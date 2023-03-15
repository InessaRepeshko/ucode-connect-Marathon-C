#ifndef HEADER
#define HEADER

#include <errno.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int mx_strlen(const char *s);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printwc(int string, int word, int ch, int check, char *argv);
void mx_printstr(const char *s);

#endif

