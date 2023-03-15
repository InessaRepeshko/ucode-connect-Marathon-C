#ifndef HEADER
#define HEADER

#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int mx_strlen(const char *s);
void mx_printerr(const char *s);

#endif

