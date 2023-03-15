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

typedef struct s_agent {
	char *name;
	int power;
	int strength;
} t_agent;

t_agent *mx_create_agent(char *name, int power, int strength);
t_agent **mx_parse_agents(char *src, int count);
int mx_atoi(const char *str);
int mx_count_agents(char *src);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_file_to_str(const char *filename);
char *mx_strdup(const char *str);
char *mx_strchr(const char *s, int c);
char *mx_strcpy(char *dst, const char *src);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
char *mx_strstr(const char *s1, const char *s2);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printstr(const char *s);
void mx_sort_agents(t_agent ***agent_kit, char *flag, int count);

#endif

